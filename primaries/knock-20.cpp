#include <iostream>
using namespace std;

int main(){
    int num1 = 0;
    int num2 = 0;
    cout << "input 1st value: ";
    cin >> num1;
    cout << "input 2nd value: ";
    cin >> num2;
    int result1 = num1 / num2;
    int result2 = result1 * num2;
    cout << "result: " << result1 << endl;
    cout << "result: " << result2 << endl;
    return 0;
}