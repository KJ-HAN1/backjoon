/*
2023_08_04
backjoon 1932 - 정수삼각형  https://www.acmicpc.net/problem/1932
*/
#include <iostream>
#include <algorithm>
using namespace std;

int triangle[501][501] = {0, };
int dp[501][501] = {0, };

int main() {
    int N;  // 삼각형 크기
    cin >> N;

    for (int i = 1; i <= N; i++) {  // 삼각형 생성
        for (int j = 1; j <= i; j++) {
            cin >> triangle[i][j];
        }
    }

    dp[1][1] = triangle[1][1];

    for (int i = 2; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + triangle[i][j];
        }
    }

    int maxSum = 0;
    for (int i = 1; i <= N; i++) {
        maxSum = max(maxSum, dp[N][i]);
    }

    cout << maxSum;
    return 0;
}