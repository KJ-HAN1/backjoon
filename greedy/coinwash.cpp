/*
2023_06
backjoon 2720 - 세탁소 사장 동혁  https://www.acmicpc.net/problem/2720
*/
#include<iostream>

using namespace std;


void change(int N, int sum[]){
    int Quarter = 25;
    int Dime = 10;
    int Nickel = 5;
    int Penny = 1;

    if(N/Quarter == 0) sum[0] = 0;
            else {
                sum[0] = N/Quarter;
                N = N%Quarter;
            }
            if(N/Dime == 0) sum[1] = 0;
            else {
                sum[1] = N/Dime;
                N = N%Dime;
            }
            if(N/Nickel == 0) sum[2] = 0;
            else {
                sum[2] = N/Nickel;
                N = N%Nickel;
            }
            if(N/Penny == 0) sum[3] = 0;
            else {
                sum[3] = N/Penny;
            }

}

int main(){

    int T;
    cin >> T;
    int sum[4] = {0};

    for(int i=0;i<T; i++){
        int N;
        cin >> N;
        change(N,sum);
        for(int i=0; i<4;i++){
            cout << sum[i] << " ";
        }
    }
    return 0;
}