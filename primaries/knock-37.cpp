#include <iostream>
using namespace std;

int main(){
    int num = 0;
    int num_arr[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};
    cout << "input index: ";
    cin >> num;
    cout << "value = " << num_arr[num_arr[num]] << endl;
    return 0;
}