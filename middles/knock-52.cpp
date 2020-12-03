#include <iostream>
using namespace std;

int main(){
    int year = 0;
    cout << "input year: ";
    cin >> year;
    bool flg = false;
    if(year % 4 == 0){
        if(year % 100 != 0 || year % 400 == 0){
            flg = true;
        }
    }
    if(flg){
        cout << year << "年は閏年である" << endl;
    } else {
        cout << year << "年は閏年でない" << endl;
    }
    return 0;
}