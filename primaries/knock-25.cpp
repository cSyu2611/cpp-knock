#include <iostream>
using namespace std;

int main(){
    int num = 0;
    cout << "input number: ";
    cin >> num;
    if(num < -10){
        cout << "range 1" << endl;
    } else if(num >= -10 && num < 0) {
        cout << "range 2" << endl;
    } else if(num >= 0){
        cout << "range 3" << endl;
    }
    return 0;
}