/* 2024_02_27
Han, KukJin 
baekjoon 2178 dfs
*/
#include<iostream>
#include<queue>

using namespace std;

int N,M;
int maze[101][101] = {0, };
int visited[101][101] = {0, };
int dist[101][101] = {0, };

queue<pair<int,int>> q;

int x_dir[4] = {-1,1,0,0};
int y_dir[4] = {0,0,-1,1};

void BFS(int x, int y){
    visited[x][y] = 1;
    q.push(make_pair(x,y));
    dist[x][y] ++;

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i=0; i<4; i++){
            int x_new = x+x_dir[i];
            int y_new = y+y_dir[i];

            if( (0 <= x_new && x_new < N) && (0 <= y_new && y_new <M)
            && !visited[x_new][y_new] && maze[x_new][y_new] == 1){

                visited[x_new][y_new] = 1;
                q.push(make_pair(x_new, y_new));
                dist[x_new][y_new] = dist[x][y]+1;
            }
        }
    }    
}

int main(){
    
    cin >> N >>M;

    //미로&벽 설정
    for(int i=0;i<N; i++){
        string s;
        cin >> s;
        for(int j=0; j<M; j++){    
            maze[i][j] = s[j] - '0';
        }
    }
    BFS(0,0);

    cout << dist[N-1][M-1];
    

    return 0;
}