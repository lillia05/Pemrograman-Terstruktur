#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    char arr[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j <= n - 5; j++){
            if(arr[i][j] == 's' && arr[i][j+1] == 'n' && arr[i][j+2] == 'u' && arr[i][j+3] == 'k' && arr[i][j+4] == 'e'){
                cout << i + 1 << " " << j + 1 << endl;
                cout << i + 1 << " " << j + 2 << endl;
                cout << i + 1 << " " << j + 3 << endl;
                cout << i + 1 << " " << j + 4 << endl;
                cout << i + 1 << " " << j + 5 << endl;
            }
            if(arr[i][j] == 'e' && arr[i][j+1] == 'k' && arr[i][j+2] == 'u' && arr[i][j+3] == 'n' && arr[i][j+4] == 's'){
                cout << i + 1 << " " << j + 5 << endl;
                cout << i + 1 << " " << j + 4 << endl;
                cout << i + 1 << " " << j + 3 << endl;
                cout << i + 1 << " " << j + 2 << endl;
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }

    for(int i = 0; i <= m - 5; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 's' && arr[i+1][j] == 'n' && arr[i+2][j] == 'u' && arr[i+3][j] == 'k' && arr[i+4][j] == 'e'){
                cout << i + 1 << " " << j + 1 << endl;
                cout << i + 2 << " " << j + 1 << endl;
                cout << i + 3 << " " << j + 1 << endl;
                cout << i + 4 << " " << j + 1 << endl;
                cout << i + 5 << " " << j + 1 << endl;
            }
            if(arr[i][j] == 'e' && arr[i+1][j] == 'k' && arr[i+2][j] == 'u' && arr[i+3][j] == 'n' && arr[i+4][j] == 's'){
                cout << i + 5 << " " << j + 1 << endl;
                cout << i + 4 << " " << j + 1 << endl;
                cout << i + 3 << " " << j + 1 << endl;
                cout << i + 2 << " " << j + 1 << endl;
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }

    for(int i = 0; i <= m - 5; i++){
        for(int j = 0; j <= n - 5; j++){
            if(arr[i][j] == 's' && arr[i+1][j+1] == 'n' && arr[i+2][j+2] == 'u' && arr[i+3][j+3] == 'k' && arr[i+4][j+4] == 'e'){
                cout << i + 1 << " " << j + 1 << endl;
                cout << i + 2 << " " << j + 2 << endl;
                cout << i + 3 << " " << j + 3 << endl;
                cout << i + 4 << " " << j + 4 << endl;
                cout << i + 5 << " " << j + 5 << endl;
            }
            if(arr[i][j] == 'e' && arr[i+1][j+1] == 'k' && arr[i+2][j+2] == 'u' && arr[i+3][j+3] == 'n' && arr[i+4][j+4] == 's'){
                cout << i + 5 << " " << j + 5 << endl;
                cout << i + 4 << " " << j + 4 << endl;
                cout << i + 3 << " " << j + 3 << endl;
                cout << i + 2 << " " << j + 2 << endl;
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }

    for(int i = 0; i <= m - 5; i++){
        for(int j = n - 1; j >= 4; j--){
            if(arr[i][j] == 's' && arr[i+1][j-1] == 'n' && arr[i+2][j-2] == 'u' && arr[i+3][j-3] == 'k' && arr[i+4][j-4] == 'e'){
                cout << i + 1 << " " << j + 1 << endl;
                cout << i + 2 << " " << j     << endl;
                cout << i + 3 << " " << j - 1 << endl;
                cout << i + 4 << " " << j - 2 << endl;
                cout << i + 5 << " " << j - 3 << endl;
            }
            if(arr[i][j] == 'e' && arr[i+1][j-1] == 'k' && arr[i+2][j-2] == 'u' && arr[i+3][j-3] == 'n' && arr[i-4][j+4] == 's'){
                cout << i + 5 << " " << j - 3 << endl;
                cout << i + 4 << " " << j - 2 << endl;
                cout << i + 3 << " " << j - 1 << endl;
                cout << i + 2 << " " << j     << endl;
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }

    return 0;
}