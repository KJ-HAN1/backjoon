/*
2024_03_14
KukJin_Han

beakjoon 11724 연결 요소의 개수
*/

#include<iostream>
#include<vector>
#include<queue>
#define MAX 1001
using namespace std;

int N,M; //N:정점, M:간선
int u,v; //간선의 양끝점
vector<int> vec[MAX];
bool visited[MAX] = {0, };
queue<int> q;

void BFS(int x){
    q.push(x);
    visited[x] = 1;

    while(!q.empty()){
        int num = q.front();
        q.pop();
        for(int i=0;i<vec[num].size();i++){
            
        }
    }
}

int main(){
    cin >> N >> M;

    for(int i=0;i<M;i++){
        cin >> u >> v;
        //무방향 그래프
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    

    return 0;
}