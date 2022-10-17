/*
2022_09_28
backjoon 10162 microwave https://www.acmicpc.net/problem/10162
*/
#include<iostream>

using namespace std;

int main(){

    int abc[3] = {300,60,10}; //버튼별 시간(초)
    int n; // n = 입력 시간
    int a,b,c;
    int temp;

    cin >> n;

    if((n % 10) > 0){ //3가지 버튼으로 n초를 도달할 수 없을 시
        cout << -1;
        return 0;
    }
        a = n / abc[0];
        temp = n % abc[0];

        b = temp / abc[1];
        temp = n % abc[1];

        c = temp / abc[2];
        temp = n % abc[2];
        
        cout << a << " " << b << " " << c ;

    return 0;
}