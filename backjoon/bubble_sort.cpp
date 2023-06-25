/*
2023_06_25
backjoon 1377 - 버블 소트  https://www.acmicpc.net/problem/1377

*/
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<pair<int, int>> v(N);

    for(int i=0;i<N; i++){
        cin >> v[i].first;
        v[i].second = i;
    }

    return 0;
}