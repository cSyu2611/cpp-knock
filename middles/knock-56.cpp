#include <iostream>
using namespace std;

int main(){
    int num_arr[16];
    int num = 0;
    cout << "input number: ";
    cin >> num;
    for(int i = 0; i < 16; i++){
        num_arr[i] = num % 2;
        num = num / 2;
    }
    for(int i = 15; i >= 0; i--){
        cout << num_arr[i];
    }
    cout << endl;
    return 0;
}