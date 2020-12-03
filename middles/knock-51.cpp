#include <iostream>
using namespace std;

int main(){
    int money = 0;
    cout << "input money: ";
    cin >> money;
    int coin100 = money / 100;
    int coin10 = (money - coin100 * 100) / 10;
    int coin1 = money - coin100 * 100 - coin10 * 10;
    cout << "100円玉" << coin100 << "枚, 10円玉" << coin10 << "枚, 1円玉" << coin1 << "枚" << endl;
    return 0;
}