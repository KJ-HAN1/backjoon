/*
<<<<<<< HEAD
KukJin
backjoon 13305 주유소 https://www.acmicpc.net/problem/13305
*/
=======
2023_05_05
backjoon 13305 - 주유소  https://www.acmicpc.net/problem/13305
*/
#include <iostream>

using namespace std;

long long  km[100000]; // 도시 사이 거리 N-1개
long long  cost[100000]; // 기름 가격

int main(){
    int N; //도시 개수
    cin >> N;
    long long  min;
    long long  total;

    for(int i=1;i<N;i++){
        cin >> km[i];
    }
    for(int i=0; i<N;i++){
        cin >> cost[i];
    }

    min = cost[0];
    total = cost[0] * km[1]; // 누적 기름값

    for(int i=1;i<N;i++){
        if(min<cost[i]){
            total += km[i+1] * min;
        }else{
            total += km[i+1] * cost[i];
            min = cost[i];
        }
    }
    cout << total;

    return 0;
}
>>>>>>> 2fb4681af9f357c16323f1d4c03ce37e6329a6fe
