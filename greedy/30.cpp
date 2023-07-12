/*
2023_05_18
backjoon 10610 - 30  https://www.acmicpc.net/problem/10610
*/
#include<iostream>
#include<algorithm>

using namespace std;

bool des( int a, int b){ // 가장 큰 수를 찾기 위한 내림차순
    if(a>b) return true;
    return false;
}

int main(){
    string N; //발견한 수 N
    cin >> N;

    long long sum = 0;
    bool zero = false;

    for(int i=0; i < N.size();i++){
        if(N[i] == '0') zero = true;
        sum += N[i];
    }
    if(sum % 3 || !zero) cout << "-1";
    else {
        sort(N.begin(),N.end(),des);
        cout << N << endl;
    }
    
    return 0;
}