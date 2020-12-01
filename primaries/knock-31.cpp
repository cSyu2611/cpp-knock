#include <iostream>
using namespace std;

int main(){
    int num = 0;
    cout << "input number: ";
    cin >> num;
    for(int i = 0; i < num; i++){
        cout << "*";
        if((i+1)%5 == 0){
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}