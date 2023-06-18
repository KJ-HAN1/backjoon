/*
2023_06_18
backjoon 11720 - 숫자의 합  https://www.acmicpc.net/problem/11720

아스키코드 '0' = 48
*/
#include <iostream>

using namespace std;

int main(){

    int N;
    char s;
    int sum =0;

    cin >> N;

    for(int i=0;i<N; i++){
        cin >> s;
        sum += s-48;
    }
    
    
    cout <<sum;
    return 0;
}