/* 2023_06_26
Han, KukJin
backjoon 24480 - dfs  https://www.acmicpc.net/problem/24480
DFS 활용
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N,M,R;
vector<int> visited;


void DFS(int R){

}

int main(){
    cin >> N>>M>>R;
    vector<vector<int>> v(N);
    for(int i=0;i<M;i++){
        int a,b;
        cin >>a >>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=0; i<N;i++){
        sort(v[i].begin(), v[i].end(), greater<int>());
    }
    DFS(R);

    return 0;
}