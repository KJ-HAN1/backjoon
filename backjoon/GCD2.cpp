/*
2023_08_24
backjoon 1934 - 최소공배수  https://www.acmicpc.net/problem/1934

*/
#include <iostream>

using namespace std;
int testCase;
int a,b;

int GCD(int a, int b);

int main(){
    
    cin >> testCase;

    for(int i=0;i<testCase;i++){
        cin >> a >> b;
        cout << a * b / GCD(a,b) << "\n";
    }
    return 0;
}

int GCD(int a, int b){
    if( b == 0){
        return a;
    }else{
        return GCD(b, a%b);
    }
}