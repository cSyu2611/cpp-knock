#include <iostream>
using namespace std;

int main(){
    int num = 0;
    cout << "input number: ";
    cin >> num;
    if(num == 0){
        cout << "zero" << endl;
    } else {
        cout << "not zero" << endl;
    }
    return 0;
}