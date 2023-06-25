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
    vector<pair<int, int>> v(N); //배열의 index와 요소 두개 기록

    for(int i=0;i<N; i++){
        cin >> v[i].first;
        v[i].second = i;
    }

    sort(v.begin(),v.end()); // O(NlogN) 으로 풀기위해 sort()

    int temp = 0;
    for(int i=0; i<N; i++){
        if(temp < v[i].second - i) temp = v[i].second - i;
        //정렬후 index와 정렬 전 index를 비교 가장 많이 이동한 값을 temp에 기록
    }   // 버블정렬은 하나의 loop동안 최대 좌측으로 1칸 이동 가능함으로
        // 정렬전과 후의 값을 비교 후 몇번의 loop를 돌렸는지 알 수 있음.

    cout << temp + 1; //가장 많이 이동한 temp의 값에 +1

    return 0;
}