/*
2023_06_12
backjoon 1202 - 보석 도둑  https://www.acmicpc.net/problem/1202
priority_queue, pair, sort 활용
*/
#include<iostream>
#include<queue>
#include<algorithm>
#define MAX 300001

using namespace std;

int N,K;  //N=보석 수 , K = 가방 수
long long sum = 0;
pair<int,int> jewel[MAX];
int c[MAX]; // 가방의 무게
priority_queue<int> pq;

long long sol(int N, int K){
    sort(jewel,jewel+N);
    sort(c,c+K);
    
    int count=0; 

    for(int i=0; i<K; i++){
        while(count<N && c[i] >= jewel[count].first){
            pq.push(jewel[count].second);
            count ++;
        }
        if(!pq.empty()){
            sum += pq.top();
            pq.pop();
        }
    }
    return sum;
}


int main(){
    cin >> N >> K;

    for(int i=0; i<N;i++){
        cin >> jewel[i].first >> jewel[i].second;
    }

    for(int i=0; i<K;i++){
        cin >> c[i];
    }

    cout << sol(N,K);
    return 0;
}