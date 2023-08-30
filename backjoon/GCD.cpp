/*
2023_08_24
backjoon 11689 - GCD(n,k) = 1 (오일러의 피)  https://www.acmicpc.net/problem/11689

*/
#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){

    long N;
    cin >> N;
    long result = N;

    for(long p = 2; p <= sqrt(N); p++){
        if(N % p == 0){
            result = result - result / p;
            while(N%p ==0){
                N = N/p;
            }
        }
    }
    if(N>1){
        result = result - result / N;
    }
    cout << result << "\n";

    return 0;
}