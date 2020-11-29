#include <iostream>
#include <string>
using namespace std;

int main(){
    int num = 0;
    cout << "input number: ";
    cin >> num;
    string ans;
    if(num > 0){
        ans = "positive";
    } else if(num == 0){
        ans = "zero";
    } else if(num < 0){
        ans = "negative";
    }
    cout << ans << endl;
    return 0;
}