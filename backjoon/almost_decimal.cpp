/*
2023_07_24
backjoon 1456_ 거의소수 https://www.acmicpc.net/problem/1456
*/
#include<iostream>
#include<cmath>
#define MAX 10000001
using namespace std;

int main() {
    long A, B;
    cin >> A >> B;
    long decimal[MAX];

    for (int i = 2; i < MAX; i++) { // 10^7까지의 배열 초기화
        decimal[i] = i;
    }

    for (int i = 2; i < sqrt(MAX); i++) { // 에라토스테네스 체 소수 구하기
        if (decimal[i] == 0) {
            continue;
        }
        for (int j = i + i; j < MAX; j += i) {
            decimal[j] = 0;
        }
    }

    // 거의소수 구하기
    int cnt = 0;
    for (int i = 2; i < MAX; i++) {
        if (decimal[i] != 0) {
            long temp = decimal[i];
            while ((double)temp <= (double)B / (double)decimal[i]) {
                if ((double)temp >= (double)A / (double)decimal[i]) {
                    cnt++;
                }
                temp *= decimal[i];
            }
        }
    }

    cout << cnt;
    return 0;
}

