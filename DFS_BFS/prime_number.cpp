/*
2023_06_22
backjoon 2023 - 신기한 소수  https://www.acmicpc.net/problem/2323
DFS 활용
*/
#include <iostream>

using namespace std;

int N;

bool isPrime(int number){  //약수 판별 (에라토스테네스의 체)
    for(int i=2; i<= number / 2; i++){
        if(number%i == 0) return false;
    }return true;
}

void DFS(int number, int location){  //DFS
    if (location == N){
        if(isPrime(number)){
            cout << number << "\n";
        }
        return;
    }
    for(int i=1;i<10;i++){
        if( 1%2 ==0){
            continue;
        }
        if(isPrime(number*10 + i)){
            DFS(number * 10 + i, location + 1);
        }
    }
    
}


int main(){

    cin >> N;

    DFS(2, 1);  // (소수, 해당 소수의 자리수)
    DFS(3, 1);  // 첫째자리수에 올 수 있는 소수는 2,3,5,7 만 존재함
    DFS(5, 1);
    DFS(7, 1);

    return 0;
}