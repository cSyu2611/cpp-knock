#include <iostream>
using namespace std;

int main(){
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    cout << "input a: ";
    cin >> num1;
    cout << "input b: ";
    cin >> num2;
    cout << "input c: ";
    cin >> num3;
    int D = num2 * num2 - 4 * num1 * num3;
    if(D > 0){
        cout << "2つの実数解" << endl;
    } else if(D == 0) {
        cout << "重解" << endl;
    } else {
        cout << "2つの虚数解" << endl;
    }
    return 0;
}