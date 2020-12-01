#include <iostream>
using namespace std;

int main(){
    int num1 = 0;
    int num2 = 0;
    int num_arr[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};
    cout << "input index1: ";
    cin >> num1;
    cout << "input index2: ";
    cin >> num2;
    cout << num_arr[num1] << " * " << num_arr[num2] << " = " << num_arr[num1] * num_arr[num2] << endl;
    return 0;
}