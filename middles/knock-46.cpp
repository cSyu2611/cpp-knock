#include <iostream>
using namespace std;

int main(){
    int people = 0;
    int fee = 600;
    cout << "人数 ";
    cin >> people;
    if(people >= 20){
        fee = 500;
    } else if(people >= 5){
        fee = 550;
    }
    cout << "料金 " << fee * people << endl;
    return 0;
}