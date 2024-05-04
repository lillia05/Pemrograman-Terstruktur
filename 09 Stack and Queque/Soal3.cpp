//cara pertama
#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    queue<int>a;
    vector<pair<string,int>>operasi;
    
    for(int i = 0; i < N; i++){
        string perintah;
        cin>>perintah;
        
        if (perintah == "push"){
            int angka;
            cin>>angka;
            operasi.push_back(make_pair(perintah,angka));
        }else if (perintah == "pop"){
            operasi.push_back(make_pair(perintah,-1));
        }
    }
    for(const auto &op : operasi){
        if (op.first == "push"){
            a.push(op.second);
        }else if (op.first == "pop"){
            if (!a.empty()){
                a.pop();
            }
        }
        queue<int>temp = a;
        while (!temp.empty()){
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }
    return 0;
}



//cara kedua
#include <iostream>
#include <queue>

using namespace std;

void print_queue(queue<int> q) {
	if (!q.empty()) {
		cout << q.front();
		q.pop();
	}

	while (!q.empty()) {
		cout << " " << q.front();
		q.pop();
	}

	cout << endl;
}

int main() {
	int N, val;
	queue<int> q;
	string command;

	cin >> N;
	while (N--) {
		cin >> command;

		if (command == "push") {
			cin >> val;
			q.push(val);
			print_queue(q);
		} else {
			if (!q.empty()) {
				q.pop();
				print_queue(q);
			}
		}
	}
}