#include <iostream>
using namespace std;

int main(){
    int distance = 0;
    int sum_fee = 610;
    cout << "距離 ";
    cin >> distance;
    if(distance <= 1700){
        cout << "金額 " << sum_fee << endl;
        return 0;
    }
    distance = distance - 1700;
    if(distance % 313 == 0){
        sum_fee = sum_fee + distance / 313 * 80;
    } else {
        sum_fee = sum_fee + (distance / 313 + 1) * 80;
    }
    cout << "金額 " << sum_fee << endl;
    return 0;
}