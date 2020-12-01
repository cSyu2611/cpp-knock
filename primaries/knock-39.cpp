#include <iostream>
using namespace std;

int main(){
    int num_arr[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};
    for(int i = 0; i < 9; i++){
        cout << num_arr[i] - num_arr[i+1] << endl;
    }
    return 0;
}