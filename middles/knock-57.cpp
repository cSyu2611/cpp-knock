#include <iostream>
using namespace std;

int main(){
    int datas = 0;
    cin >> datas;
    int data_arr[datas][3];
    int i = 0;
    int sum_arr[3] = {0, 0, 0};
    while(cin >> data_arr[i][0] >> data_arr[i][1] >> data_arr[i][2]){
        sum_arr[0] = sum_arr[0] + data_arr[i][0];
        sum_arr[1] = sum_arr[1] + data_arr[i][1]; 
        sum_arr[2] = sum_arr[2] + data_arr[i][2]; 
        i++;
    }
    cout << "平均点 英語:" << sum_arr[0] / datas << ", 数学:" << sum_arr[1] / datas << ", 国語:" << sum_arr[2] / datas << endl;
    cout << "個人合計点" << endl;
    for(int i = 0; i < datas; i++){
        cout << i << ": " << data_arr[i][0] + data_arr[i][1] + data_arr[i][2] << endl;
    }
    return 0;
}