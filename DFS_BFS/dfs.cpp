/* 2202_11_20
Han, KukJin
backjoon dfs
*/
#include<iostream>
#define MAX 9999999
using namespace std;
int N,M,R;
bool invited[MAX];
int map[99999][999];

void reset(){
    for(int i=0;i<N;i++){
        invited[i] = 0;
    }
}
void dfs(int x){
    invited[x] = true;
    cout << x << endl;

    for(int i=N; i>=1;i--){
        if(map[x][i] == 1 & invited[i] == 0){
            dfs(i);
        } 
    }
    
}

int main(){
    cin >> N >> M >> R;
    for(int i=0;i<N;i++){
        int a,b;
        cin >> a >> b;
        map[a][b] = 1;
        map[b][a] = 1;
    }
    reset();
    dfs(R);
    for(int i=N; i>=1;i--){
        if(map[R][i] == 0 & invited[i] == 0){
            cout << "0" << endl;
        } 
    }
    return 0;
}