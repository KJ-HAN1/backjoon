/*
2023_06
backjoon 4796 - 캠핑  https://www.acmicpc.net/problem/4796
*/
#include<iostream>

using namespace std;

int main(){

    int L,P,V;  // L= 사용가능 일수 P = 연속한 일수 V = 휴가
    int sum;
    int Case = 1; 

    while(1){
        sum = 0;
        cin >> L >> P >> V;
        if(L == 0 && P ==0 && V == 0) break;  // 0 0 0 입력시 종료

        sum += (V/P)*L;
        if(V%P > L) sum += L;
        else sum += V%P;

        cout << "Case " << Case << ": " << sum << endl;
        Case ++;
    }
    

    return 0;
}