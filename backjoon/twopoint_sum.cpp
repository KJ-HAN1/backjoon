/*
2023_07_05
backjoon 1806 - 부분합  https://www.acmicpc.net/problem/1806

*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int arr[100001];
int N, S;

int main(){
    cin >> N >> S;
    for(int i=0; i<N; i++) cin >> arr[i];

    int start=0, end=0, total = arr[0], ans = 987654321;

    while(start <= end && end <= N){
        if(total >= S) ans = min(ans, (end-start+1));
        if(total < S) {
            end++; 
            total += arr[end];
        } else {
            total -= arr[start];
            start++;
        }
    }
    if(ans == 987654321) cout << "0";
    else cout << ans;
}