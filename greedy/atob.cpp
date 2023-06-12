/*
2023_06
backjoon 16953 - A -> B  https://www.acmicpc.net/problem/16953
*/
#include<iostream>

using namespace std;

int main(){
    long long A, B;
    int cnt = 0;
    cin >> A >> B;

    while(true){
        if(A>B){
            cout << -1 << endl;
            break;
        }
        if(A==B){
            cnt++;
            cout<< cnt << endl;
            break;
        }
        if(B%10 == 1){
            B--;
            B = B/10;
            
        }
        else if(B%2==0){
            B = B/2;
            
        }
        else{
            cout << -1;
            break;
        }
        cnt++;
    }
    return 0;
}