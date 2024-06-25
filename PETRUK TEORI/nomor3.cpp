#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool Operator(char opr) {
    return opr == '*' || opr == '/' || opr == '+' || opr == '-' || opr == '%';
}

int precedence(char op) {
    if (op == '*' || op == '/' || op == '%') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

bool isDigit(char ch) {
    return ch >= '0' && ch <= '9';
}

bool isSpace(char ch) {
    return ch == ' ';
}

string infixToPostfix(const string& infix) {
    string postfix;
    stack<char> operators;
    bool expectUnary = true;

    int n = infix.size();
    for (int i = 0; i < n; ++i) {
        if (isSpace(infix[i]))
            continue;

        if (isDigit(infix[i])) {
            postfix += infix[i];
            while (i + 1 < n && (isDigit(infix[i + 1]) || infix[i + 1] == '.')) {
                postfix += infix[++i];
            }
            postfix += ' ';
            expectUnary = false;
        } else if (infix[i] == '(') {
            operators.push('(');
            expectUnary = true;
        } else if (infix[i] == ')') {
            while (!operators.empty() && operators.top() != '(') {
                postfix += operators.top();
                postfix += ' ';
                operators.pop();
            }
            operators.pop();
            expectUnary = false;
        } else if (Operator(infix[i])) {
            if (expectUnary && infix[i] == '-') {
                postfix += "-1 ";
                operators.push('*');
            } else {
                while (!operators.empty() && precedence(operators.top()) >= precedence(infix[i])) {
                    postfix += operators.top();
                    postfix += ' ';
                    operators.pop();
                }
                operators.push(infix[i]);
            }
            expectUnary = true;
        }
    }

    while (!operators.empty()) {
        postfix += operators.top();
        postfix += ' ';
        operators.pop();
    }

    return postfix;
}

int stringToInt(const string& s, size_t& index) {
    int result = 0;
    bool negative = false;

    if (s[index] == '-') {
        negative = true;
        ++index;
    }

    while (index < s.size() && isDigit(s[index])) {
        result = result * 10 + (s[index] - '0');
        ++index;
    }

    return negative ? -result : result;
}

int evaluatePostfix(const string& postfix) {
    stack<int> operands;
    size_t index = 0;
    size_t n = postfix.size();

    while (index < n) {
        if (isSpace(postfix[index])) {
            ++index;
            continue;
        }

        if (isDigit(postfix[index]) || (postfix[index] == '-' && isDigit(postfix[index + 1]))) {
            operands.push(stringToInt(postfix, index));
        } else {
            int right = operands.top();
            operands.pop();
            int left = operands.top();
            operands.pop();

            if (postfix[index] == '+') operands.push(left + right);
            else if (postfix[index] == '-') operands.push(left - right);
            else if (postfix[index] == '*') operands.push(left * right);
            else if (postfix[index] == '/') operands.push(left / right);
            else if (postfix[index] == '%') operands.push(left % right);

            ++index;
        }
    }

    return operands.top();
}

int main() {
    string infix;
    getline(cin, infix);

    string postfix = infixToPostfix(infix);
    int result = evaluatePostfix(postfix);
    cout << result << endl;

    return 0;
}
