#include <iostream>
using namespace std;

int main(){
    int num = 0;
    int prime = 2;
    cout << "input number: ";
    cin >> num;
    while(num != 1){
        while(num%prime==0){
            num = num / prime;
            cout << prime << " ";
            if(num == 1){
                break;
            }
        }
        prime++;
    }
    cout << endl;
    return 0;
}