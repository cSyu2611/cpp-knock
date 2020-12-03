#include <iostream>
using namespace std;

int main(){
    int matrix1[3][3];
    int matrix2[3][3];
    cout << "１つめの行列" << endl;
    cin >> matrix1[0][0] >> matrix1[0][1] >> matrix1[0][2];
    cin >> matrix1[1][0] >> matrix1[1][1] >> matrix1[1][2];
    cin >> matrix1[2][0] >> matrix1[2][1] >> matrix1[2][2];
    cout << "2つめの行列" << endl;
    cin >> matrix2[0][0] >> matrix2[0][1] >> matrix2[0][2];
    cin >> matrix2[1][0] >> matrix2[1][1] >> matrix2[1][2];
    cin >> matrix2[2][0] >> matrix2[2][1] >> matrix2[2][2];
    cout << "和" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matrix1[i][j] + matrix2[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}