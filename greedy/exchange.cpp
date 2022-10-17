/*
2022_09_20
backjoon 5585 exchange https://www.acmicpc.net/problem/5585
*/
#include<iostream>

using namespace std;

int main(){
    int n; //물건값
    int k = 1000; //지불 금액
    int change[6] = {500,100,50,10,5,1}; //잔돈 종류

    cin >> n; //물건값 n<1000

    int a = k-n;
    int sum=0; //받은 거스름 갯수
    for(int i=0; i<(sizeof(change)/4);i++){
        if(a==0) break;
        sum += a / change[i];
        a = a%change[i];
    }
    cout << sum;
    return 0;
}