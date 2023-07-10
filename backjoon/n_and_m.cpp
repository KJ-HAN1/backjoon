#include<iostream>
#include<vector>
#define MAX 9
using namespace std;

int N,M;
bool visited[MAX] = {0, };
int v[MAX] = {0, };

void dfs(int cnt);

int main(){
    cin >> N >> M;
    dfs(0);
    return 0;
}

void dfs(int cnt){
    if(cnt == M){
        for(int i=0; i<M;i++){
            cout << v[i] << " " ;
        }
        cout << "\n";
        return;
    }
    for(int i = 1; i<=N; i++){
        if(!visited[i]){
            visited[i] = true;
            v[cnt] = i;
            dfs(cnt+1);
            //visited[i] = false;
        }
    }
}