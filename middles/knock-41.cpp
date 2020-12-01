#include <iostream>
using namespace std;

void is_natural_number(int num){
    if(num > 0 && num <= 9){
        cout << num << " is a single figure." << endl;
    } else {
        cout << num << " is not a single figure." << endl;
    }
}

int main(){
    int num = 0;
    cout << "input number: ";
    cin >> num;
    is_natural_number(num);
    return 0;
}