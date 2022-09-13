/*
2022_09_05
backjoon 11399 - ATM  https://www.acmicpc.net/problem/11399
*/
#include<iostream>
#include<stdio.h> // scanf()
#include<algorithm> // sort()

using namespace std;

int main(){
    int n=0; // n = 사람수
    scanf("%d",&n); // 사람수 입력받기

    int* arr = new int(n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); //걸리는 시간 입력받기
    }

    sort(arr, arr+n); // sort(정렬할 시작점, 정렬마칠 부분+N)

    //대기시간 합계
    int time = 0, temp =0;

    for(int i=0;i<n;i++){
        temp += arr[i];
        time += temp;
    }

    printf("%d",time);
    
    return 0;
}