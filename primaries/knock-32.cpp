#include <iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 20; i++){
        if(i%5 == 0){
            cout << "bar" << endl;;
        } else {
            cout << i << endl;
        }
    }
    return 0;
}