//cara pertama
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

void execute_commands(int N, vector<pair<string, int>> &perintah) {
    stack<int> a;

    for (int i = 0; i < N; ++i) {
        if (perintah[i].first == "push") {
            a.push(perintah[i].second);
        } else if (!a.empty()) {
            a.pop();
        }

        stack<int> temp = a;
        while (!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;

    vector<pair<string, int>> perintah(N);
    for (int i = 0; i < N; ++i) {
        cin >> perintah[i].first;
        if (perintah[i].first == "push") {
            cin >> perintah[i].second;
        }
    }

    execute_commands(N, perintah);

    return 0;
}


//cara kedua
#include <iostream>
#include <stack>

using namespace std;

void print_stack(stack<int> s) {
	if (!s.empty()) {
		cout << s.top();
		s.pop();
	}

	while (!s.empty()) {
		cout << " " << s.top();
		s.pop();
	}

	cout << endl;
}

int main() {
	int N, val;
	stack<int> s;
	string command;

	cin >> N;
	while (N--) {
		cin >> command;

		if (command == "push") {
			cin >> val;
			s.push(val);
			print_stack(s);
		} else {
			if (!s.empty()) {
				s.pop();
				print_stack(s);
			}
		}
	}
}