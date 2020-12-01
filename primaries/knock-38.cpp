#include <iostream>
using namespace std;

int main(){
    int next_index = 0;
    int num_arr[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};
    for(int i = 0; i < 10; i++){
        next_index = num_arr[next_index];
        cout << next_index << endl;
    }
    return 0;
}