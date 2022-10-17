/*
2022_09_21
backjoon 2217 rope https://www.acmicpc.net/problem/2217
*/
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n; // n = 로프 갯수
    cin >> n;

    int rope[100000];
    for(int i =0; i<n; i++){
        cin >> rope[i];
    }

    sort(rope,rope+n);

    int k=rope[n-1]; //가장무거운 rope 기준
    int temp=0;
    for(int i = n-1; i >=0; i--){
        temp = rope[i]*(n-i);
        if(k<temp) {
            k = temp;
        }
    }

    cout << k;
    return 0;
}