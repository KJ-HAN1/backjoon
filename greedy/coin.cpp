/*
2022_09_15
backjoon 11047 coin https://www.acmicpc.net/problem/11047
*/
#include<iostream>

using namespace std;

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int* sumcoin = new int(n);

    for(int i=0; i<n; i++){
        scanf("%d", &sumcoin[i]);
    }
    
    return 0;
}