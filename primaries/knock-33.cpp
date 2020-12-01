#include <iostream>
using namespace std;

int main(){
    int num = 0;
    cout << "input number: ";
    cin >> num;
    for(int i = 1; i <= 9; i++){
        if(i != num){
            cout << i << endl;
        }
    }
    return 0;
}