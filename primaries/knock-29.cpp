#include <iostream>
using namespace std;

int main(){
    int num = 0;
    int ans_num = 0;
    for(int i = 0; i < 5; i++){
        cout << "input number: ";
        cin >> num;
        ans_num = ans_num + num;
    }
    cout << ans_num << endl;
    return 0;
}