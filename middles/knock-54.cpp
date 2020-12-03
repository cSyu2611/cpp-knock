#include <iostream>
using namespace std;

int main(){
    int datas = 0;
    int num_arr[100];
    int i = 0;
    int max = 0;
    int min = 0;
    cin >> datas;
    while(cin >> num_arr[i]){
        if(i == 0){
            min = num_arr[i];
        }
        if(num_arr[i] > max){
            max = num_arr[i];
        }
        if(num_arr[i] < min){
            min = num_arr[i];
        }
        i++;
    }
    cout << "最小値 = " << min << ", 最大値 = " << max << endl;
    return 0;
}