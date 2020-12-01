#include <iostream>
using namespace std;

void is_even(int num){
    if(num %2 == 0){
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }
}

int main(){
    int num = 0;
    cout << "input number: ";
    cin >> num;
    is_even(num);
    return 0;
}