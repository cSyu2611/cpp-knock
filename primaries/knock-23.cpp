#include <iostream>
using namespace std;

int main(){
    int num = 0;
    cout << "input number: ";
    cin >> num;
    if(num >= -5 && num < 10){
        cout << "OK" << endl;
    } else {
        cout << "NG" << endl;
    }
    return 0;
}