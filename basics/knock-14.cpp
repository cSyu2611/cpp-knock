#include <iostream>
using namespace std;

int main(){
    int loop_num = 0;
    cout << "input number: ";
    cin >> loop_num;
    for(int i = loop_num; i >= 0; i--){
        cout << i << endl;
    }
    return 0;
}