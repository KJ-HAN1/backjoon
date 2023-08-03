/*
2023_08_03
backjoon 1149 - RGB거리  https://www.acmicpc.net/problem/1149
*/
#include<iostream>

using namespace std;

int main(){
    int N;  //집의 수
    cin >> N;
    int paint[3];  //페인트 가격 
    int house[1001][3];

    house[0][0] = 0;
    house[0][1] = 0;
    house[0][2] = 0;

    for(int i=1;i<=N;i++){   //페인트 가격 입력
        cin >> paint[0] >> paint[1] >> paint[2];    //r,g,b
        house[i][0] = min(house[i-1][1],house[i-1][2]) + paint[0];
        house[i][1] = min(house[i-1][0],house[i-1][2]) + paint[1];
        house[i][2] = min(house[i-1][0],house[i-1][1]) + paint[2];
    }
    cout << min(house[N][0],min(house[N][1],house[N][2]));

    return 0;
}