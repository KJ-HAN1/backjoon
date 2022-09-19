/*
2022_09_19
backjoon 1026 tresure https://www.acmicpc.net/problem/1026
*/
#include<iostream>
#include<algorithm>

using namespace std;

bool desc(int& a, int& b) { //내림차순 정렬
    return a > b;
}

int main(){

    int n;      // 배열의 길이
    int a[50],b[50];    //배열

    cin >> n;
    for(int i=0; i<n; i++){ //n길이만큼의 배열입력
        cin >> a[i];
    }
    for(int i=0; i<n; i++){ //n길이만큼의 배열입력
        cin >> b[i];
    }
    sort(a,a+n);        //a,b 오름차순, 내림차순 정렬
    sort(b,b+n,desc);
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += a[i] * b[i];
    }
    cout << sum;
    return 0;
}