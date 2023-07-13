/*
KukJin
2022_12_19 backjoon 1789 https://www.acmicpc.net/problem/1789
*/
#include<iostream>

using namespace std;

int main(){

    long N;
    cin >> N;
    long sum = 0;
    long i = 1;
    int max;
    while(1){
        sum += i;
        if(sum >N){
            max = i-1;
            break;
        }

        i ++;

    }
    cout << max;
    return 0;
}