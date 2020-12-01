#include <iostream>
using namespace std;

int main(){
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    cout << "input number 1: ";
    cin >> num1;
    cout << "input number 2: ";
    cin >> num2;
    cout << "input number 3: ";
    cin >> num3;
    if(num1 <= num2 && num2 <= num3){
        cout << "OK" << endl;
    } else {
        cout << "NG" << endl;
    }
    return 0;
}