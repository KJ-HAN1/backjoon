/* 2022_11_20
Han, KukJin 
baekjoon 1260 dfs and bfs
*/

#include <iostream>
#include <queue>
#define MAX 9999
using namespace std;

int N,M,V; // 정점수,간선수,시작지점
int map[MAX][MAX]; // 간선연결
bool visited[MAX]; // 방문 확인
queue<int> que;

void reset(){ //visited 초기화
    for(int i=1;i<=N;i++){
    visited[i] =0;
    }
}

void DFS(int v){
    visited[v] = true;
    printf("%d ",v);
    for(int i=1; i<=N;i++){
        if(map[v][i] == 1 & visited[i] == 0){ //v와i가 연결되어있으면서 & 방문하지 않았을경우
            DFS(i);
        }
    }
}
void BFS(int v){
    que.push(v);
    visited[v] = true;
    printf("%d ",V);

    while(!que.empty()){
        v = que.front();
        que.pop();

        for(int i=1;i<=N;i++){
            if(map[v][i] == 1 & visited[i] == 0){ //v와i가 연결되어있으면서 & 방문하지 않았을경우
                que.push(i);
                visited[i] = 1;
                printf("%d ",i);
            }
        }
    }

}

int main(){
    
    cin >> N >> M >> V;
    for(int i=0;i<M;i++){ //간선연결
        int a,b;
        cin >> a >> b;
        map[a][b] = 1;
        map[b][a] = 1;
    }

    reset();
    DFS(V);

    cout << "\n";

    reset();
    BFS(V);
    
    return 0;
}