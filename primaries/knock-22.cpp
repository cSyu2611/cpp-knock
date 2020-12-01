#include <iostream>
using namespace std;

int main(){
    int num = 0;
    cout << "input number: ";
    cin >> num;
    if(num >= 10 || num <= -10){
        cout << "OK" << endl;
    }
    return 0;
}