/*
2023_07_25
backjoon 1003 - 피보나치함수  https://www.acmicpc.net/problem/1003
*/
#include<iostream>
#include<vector>
using namespace std;



int main(){
    int Test_Case;
    int N;
    cin >> Test_Case;

    vector<pair<int,int>> pibo;

    //0,1,2의 값 미리 지정
    pibo.push_back(make_pair(1,0));
    pibo.push_back(make_pair(0,1));
    pibo.push_back(make_pair(1,1));



    for(int i=3; i<=40;i++){
        pibo.push_back(make_pair(pibo[i-1].first+pibo[i-2].first,pibo[i-1].second+pibo[i-2].second));
    }

    for(int i=0; i<Test_Case; i++){
        cin >> N;
        cout << pibo[N].first << " " << pibo[N].second << "\n";
    }
    return 0;
}