#include <iostream>
using namespace std;

int main(){
    int num_arr[10] = {0,1,2,3,4,5,6,7,8,9};
    for(int i = 0; i < sizeof(num_arr) / sizeof(num_arr[0]); i++){
        cout << i << endl;
    }
    return 0;
}