#include <iostream>
using namespace std;

int main(){
    int num1 = 0;
    int num2 = 0;
    cout << "input 1st number: ";
    cin >> num1;
    cout << "input 2nd number: ";
    cin >> num2;
    cout << "和: " << num1 + num2 << endl;
    cout << "差: " << num1 - num2 << endl;
    cout << "積: " << num1 * num2 << endl;
    cout << "商: " << num1 / num2 << ", 余り: " << num1 % num2 << endl;
    return 0;
}