// #include <iostream>
// using namespace std;

// int main(){
// 	double arr1[9];
// 	int arr2[12];
	
//     for(int i = 0; i < 9; i++){
//         cin >> arr1[i];
//     }

//     for(int i = 0; i < 9; i++){
//         cout << arr1[i];
//     }

//     for(int i = 0; i < 12; i++){
//         cin >> arr2[i];
//     }

//     for(int i = 0; i < 12; i++){
//         cout << arr2[i];
//     }

// return 0;
// }

#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    int M[m][n];
    int T[m][n];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>M[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
                T[j][i] = M[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<T[i][j];
        }
        cout<<endl;
    }
    return 0;
}