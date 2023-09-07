/*
2023_09_06
backjoon 1912 - 연속합  https://www.acmicpc.net/problem/1912
*/
#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    vector<int> dp;
    int N;

    cin >> N;

    v.resize(N);
    dp.resize(N, 0);

    for(int i=0;i<N;i++){
        cin >> v[i];
    }

    dp[0] = v[0];
    int maxSum = v[0];

    for(int i=1;i<N;i++){
        dp[i] = max(dp[i-1]+v[i], v[i]);
        maxSum = max(dp[i], maxSum);
    }
    
    cout << maxSum;

    return 0;
}