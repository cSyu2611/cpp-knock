#include <iostream>
#include <string>
using namespace std;

int main(){
    int num = 0;
    string ans;
    cout << "input number: ";
    cin >> num;
    switch (num){
        case 1:
            ans = "one";
            break;
        case 2:
            ans = "two";
            break;
        case 3:
            ans = "three";
            break;
        default:
            ans = "others";
            break;
    }
    cout << ans << endl;
    return 0;
}