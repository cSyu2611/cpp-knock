#include <iostream>
using namespace std;

int main(){
    int num = 0;
    int counter = 1;
    cout << "input number: ";
    cin >> num;
    while(num != 1){
        if(num % 2 == 0){
            num = num / 2;
        } else {
            num = num * 3 + 1;
        }
        cout << counter << ": " << num << endl;
        counter++;
    }
    return 0;
}