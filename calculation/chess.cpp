/*
2022_09_15
backjoon 3003 chess https://www.acmicpc.net/problem/3003
*/
#include<iostream>
using namespace std;

int main(){
    int a[6] = {1,1,2,2,2,8}; //정상적인 말의 갯수
    int b[6]; // 입력받을 말의 갯수
    for(int i =0; i<6;i++){
        cin >>b[i];
    }
    for(int i=0;i<6;i++){ //입력받은 말과 정상갯수 비교 연산
        if(b[i] > a[i]) cout << a[i]-b[i]<<" ";
        else if(b[i] < a[i]) cout << a[i]-b[i]<<" ";
        else cout << 0 <<" ";
    }
    
    return 0;
}