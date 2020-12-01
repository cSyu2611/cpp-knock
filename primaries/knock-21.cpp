#include <iostream>
using namespace std;

int main(){
    int num = 0;
    cout << "input number: ";
    cin >> num;
    if(num > 5 && num < 20){
        cout << "OK" << endl;
    }
    return 0;
}