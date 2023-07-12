/*
2023_06_24
backjoon 1546 - 평균  https://www.acmicpc.net/problem/1546

*/
#include <iostream>

using namespace std;

int main(){
    float max = -1;
    int N;
    cin >> N;
    float M[N];
    float sum=0;

    for(int i=0;i<N;i++){
        cin >> M[i];
        if(M[i] > max){
            max = M[i];
        }
    }

    for(int i=0;i<N;i++){       
        sum += M[i]/max*100;
    }
    cout << sum/N;
    return 0;
}