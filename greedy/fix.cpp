/*
2022_08_02
backjoon 1449 수리공 항승 https://www.acmicpc.net/problem/1449
*/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    int N;  //구멍수
    int L;  //테이프 길이
    
    cin >> N >> L;

    vector <int> pipe(N);   //구멍의 위치

    for(int i=0; i<N; i++){
        cin >> pipe[i];
    }
    sort(pipe.begin(),pipe.end());

    int cnt = 0;    //필요 테이프 수
    int fix = pipe[0];

    for(int i=1; i<N; i++){
        if(pipe[i]-fix >=L){    //구멍사이가 테이프보다 길면
            cnt ++;
            fix = pipe[i];
        }
    }
    cout << cnt+1;

    return 0;
}