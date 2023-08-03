/*
2022_07_30
backjoon 7568 덩치 https://www.acmicpc.net/problem/7568
*/
#include<iostream>
#include<vector>

using namespace std;

int main(){

    int N;  //인원수
    cin >> N;

    vector<pair<int,int>> v;
    vector<int> sol(N, 0);

    for(int i=0;i<N;i++){
        int x,y; // x=키, y=몸무게
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }

    int cnt;
    for(int i=0;i<N;i++){
        cnt =0;
        for(int j=0;j<N;j++){
            if(v[i].first < v[j].first && v[i].second < v[j].second){
                cnt++;
            }
        }
        sol[i] = cnt+1;
    }

    for(int i=0;i<N;i++){
        cout << sol[i] <<" ";
    }

    return 0;
}