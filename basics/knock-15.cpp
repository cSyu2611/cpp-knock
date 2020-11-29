#include <iostream>
using namespace std;

int main(){
    int loop_num = 0;
    cout << "input number: ";
    cin >> loop_num;
    for(int i = 0; i*2 <= loop_num; i++){
        cout << i*2 << endl;
    }
    return 0;
}