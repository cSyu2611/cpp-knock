#include <iostream>
using namespace std;

int main(){
    int num_arr[5];
    int num = 0;
    for(int i = 0; i < sizeof(num_arr) / sizeof(num_arr[0]); i++){
        cout << "input number: ";
        cin >> num;
        num_arr[i] = num;
    }
    for(int i = 0; i < sizeof(num_arr) / sizeof(num_arr[0]); i++){
        cout << num_arr[i] << endl;
    }
    return 0;
}