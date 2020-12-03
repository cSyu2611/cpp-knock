#include <iostream>
using namespace std;

int main(){
    int yen = 0;
    int dollar = 0;
    cout << "何円? ";
    cin >> yen;
    cout << "1ドルは何円? ";
    cin >> dollar;
    cout << yen << "円は" << yen / dollar << "ドル" << (yen - (yen / dollar) * dollar) * 100 / dollar << "セント" << endl;
    return 0;
}