/*
2023_06_23
backjoon 2606 - 바이러스  https://www.acmicpc.net/problem/2606
DFS 활용
*/
#include <iostream>
#include <vector>
using namespace std;

int N;
int cnt;
int network;
vector <int> v[105];    //인접 확인
int virus[105];         //감염 확인

void DFS(int x){
    for(int i=0;i<v[x].size();i++){
        int k = v[x][i];

        if(virus[k] == 0){
            virus[k] = 1;
            cnt++;
            DFS(k);
        }
    }
    return;
}

int main(){
    cin >> N >> network;

    for(int i=0;i<network;i++){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    virus[1] = 1;
    DFS(1);

    cout << cnt;
    return 0;
}