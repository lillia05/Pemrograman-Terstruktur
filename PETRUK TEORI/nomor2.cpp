#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

vector<string> strToInfix(string& inputString) {
    vector<string> expression;
    string num = "";
    int n = inputString.length();

    for (int i = 0; i < n; ++i) {
        char current = inputString[i];
        
        if ((current >= '0' && current <= '9') || (current == '-' && (i == 0 || inputString[i - 1] == '('))) {
            num += current;
            while (i + 1 < n && inputString[i + 1] >= '0' && inputString[i + 1] <= '9') {
                num += inputString[++i];
            }
            expression.push_back(num);
            num = "";
        } else if (current == '+' || current == '-' || current == '*' ||
                   current == '/' || current == '%' || current == '(' || current == ')') {
            expression.push_back(string(1, current));
        }
    }
    return expression;
}

vector<string> handleNegative(vector<string>& expression) {
    vector<string> result;
    int n = expression.size();

    for (int i = 0; i < n; ++i) {
        if (expression[i] == "-" && (i == 0 || expression[i - 1] == "(" || 
                                     expression[i - 1] == "+" || expression[i - 1] == "-" || 
                                     expression[i - 1] == "*" || expression[i - 1] == "/" || 
                                     expression[i - 1] == "%")) {
            result.push_back("-1");
            result.push_back("*");
        } else {
            result.push_back(expression[i]);
        }
    }

    return result;
}

int precedence(string op) {
    if (op == "+" || op == "-") return 1;
    if (op == "*" || op == "/" || op == "%") return 2;
    return 0;
}

vector<string> infixToPostfix(vector<string>& infix) {
    vector<string> postfix;
    stack<string> opStack;

    for (auto& token : infix) {
        if ((token[0] >= '0' && token[0] <= '9') || (token[0] == '-' && token.length() > 1)) {
            postfix.push_back(token);
        } else if (token == "(") {
            opStack.push(token);
        } else if (token == ")") {
            while (!opStack.empty() && opStack.top() != "(") {
                postfix.push_back(opStack.top());
                opStack.pop();
            }
            opStack.pop(); 
        } else {
            while (!opStack.empty() && precedence(opStack.top()) >= precedence(token)) {
                postfix.push_back(opStack.top());
                opStack.pop();
            }
            opStack.push(token);
        }
    }

    while (!opStack.empty()) {
        postfix.push_back(opStack.top());
        opStack.pop();
    }

    return postfix;
}


void printExpression(vector<string>& expression) {
    for (auto& token : expression) {
        cout << token << " ";
    }
    cout << endl;
}

int main() {
    string inputString;
    getline(cin, inputString);

    vector<string> expression = strToInfix(inputString);
    vector<string> finalExpression = handleNegative(expression);
    vector<string> postfixExpression = infixToPostfix(finalExpression);
    
    printExpression(postfixExpression);
    return 0;
}