/*
2023_06
backjoon 1049 - 기타줄  https://www.acmicpc.net/problem/1049
*/
#include <iostream>
using namespace std;

int main() {
    int N = 0, M = 0, x = 0, y = 0; // N끊어진 줄 M 브랜드 종류 x,y 6개 1개의 종류
    int set = 1000, single = 1000;
    cin >> N >> M;

    while(M--) {
        cin >> x >> y;
        set = min(set, x); //6개 짜리 줄
        single = min(single, y); // 1개 짜리 줄
    }
	
    cout << min((N/6+1)*set, min(N/6*set + N%6*single, N*single)) << '\n';
}