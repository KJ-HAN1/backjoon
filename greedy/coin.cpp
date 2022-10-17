/*
2022_09_15
backjoon 11047 coin https://www.acmicpc.net/problem/11047
*/
#include<iostream>

using namespace std;

int main(){
    int n,k; //n = 갯수 k = 가치
    int sum=0; // sum = 최종 동전 갯수
    cin >> n >> k;
    int coin[10]; // 가치를 담을 배열

    for(int i=0; i<n; i++){ //coin 가치 입력
        cin >> coin[i];
    }

    for(int i=n-1; i>=0; i--){
        if(k == 0){
            break;
        }else{
            sum += k / coin[i];
            k = k % coin[i];
        }
    }
    
    cout << sum;
    
    return 0;
}