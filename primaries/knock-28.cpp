#include <iostream>
using namespace std;

int main(){
    int num = 0;
    int ans_num = 1;
    cout << "input number: ";
    cin >> num;
    if(num > 0){
        for(int i = 1; i <= num; i++){
            ans_num = ans_num * i;
        }
    }
    cout << ans_num << endl;
    return 0;
}