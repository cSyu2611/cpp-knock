#include <iostream>
using namespace std;

int main(){
    int num1 = 0;
    int num2 = 0;
    int tmp = 0;
    cout << "input a: ";
    cin >> num1;
    cout << "input b: ";
    cin >> num2;
    tmp = num1;
    num1 = num2;
    num2 = tmp;
    cout << "a = " << num1 << ", b = " << num2 << endl;
    return 0;
}