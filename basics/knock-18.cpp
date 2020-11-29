#include <iostream>
using namespace std;

int main(){
    int num_arr[10];
    int num = 0;
    cout << "input number: ";
    cin >> num;
    for(int i = 0; i < sizeof(num_arr) / sizeof(num_arr[0]); i++){
        num_arr[i] = num;
        cout << num_arr[i] << endl;
    }
    return 0;
}