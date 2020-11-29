#include <iostream>
using namespace std;

int main(){
    int loop_num = 0;
    cout << "input number: ";
    cin >> loop_num;
    for(int i = 0; i < loop_num; i++){
        cout << "Hello World" << endl;
    }
    return 0;
}