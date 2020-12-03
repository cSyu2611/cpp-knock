#include <iostream>
using namespace std;

int main(){
    int data_arr[5];
    for(int i = 0; i < 5; i++){
        cout << "input number[" << i << "]: ";
        cin >> data_arr[i];
    }
    for(int i = 0; i < 5; i++){
        cout << data_arr[i] << "\t:";
        for(int j = 0; j < data_arr[i]; j++){
            cout << "*";
            if((j+1) % 5 == 0){
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}