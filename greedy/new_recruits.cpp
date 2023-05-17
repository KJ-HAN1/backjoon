/*
2023_05_18
backjoon 1946 - 신입사원  https://www.acmicpc.net/problem/1946
vector, pair 활용
*/
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int T,N; //testcase, 지원자수
    cin >> T;
    int cnt=0;
    int sol[T];

    for(int i=0; i<T;i++){
        vector<pair<int,int>> point; // 서류, 면접 점수
        cnt = 1;    // count 초기화
        cin >> N;

        for(int j=0; j<N; j++){
            int a,b;
            cin >> a >> b;
            point.push_back(make_pair(a,b));    
        }
        sort(point.begin(), point.end()); // 서류점수 기준 정렬
        int temp = point[0].second;
        for(int i=1;i<N;i++){
            if(temp > point[i].second) {
                temp = point[i].second;
                cnt++;
            }
        }
        sol[i] = cnt;
    }

    for(int i=0; i<T; i++){
        cout << sol[i] << endl;
    }
    return 0;
}