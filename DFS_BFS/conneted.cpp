/*
2024_03_23
KukJin_Han

beakjoon 11724 연결 요소의 개수
*/

#include<iostream>
#include<vector>
#include<queue>
#define MAX 1001

using namespace std;

vector<int> vec[MAX];
int N,M; // N=정점, M = 간선
int u,v; // 간선의 양 끝점
bool visited[MAX] = {0, }; //방문확인
int cnt = 0; //집단 갯수확인
queue<int> q; //queue


void DFS(int x){
    //queue에 넣어서 visited 확인하기
    q.push(x);
    visited[x] = true;

    //인접한 양끝점 확인
    while(!q.empty()){
        int new_x = q.front();
        q.pop();

        for(int i=0;i<vec[new_x].size();i++){
            if(visited[vec[new_x][i]] == 0){
                visited[vec[new_x][i]] = true;
                q.push(vec[new_x][i]);
            }
        }
    }
    //cnt++ 을 통해 집단 갯수 확인하기
    cnt++;
}

int main(){

    cin >> N >> M;

    //u,v입력 받기
    for(int i=0;i<M;i++){
        cin >> u >> v;

        //무방향 그래프
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    
    for(int i=1;i<=N;i++){
        if(!visited[i]){
            DFS(i);
        }
    }

    cout << cnt;
    return 0;
}