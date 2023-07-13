#include<iostream>
#include<vector>
#define MAX 10000
using namespace std;


int selfNum(int num); // d(n) 함수 만들기

int main(){
    
    vector<bool> v(MAX, false);  //생성자를 가지고 있는지 확인
    
    for(int i=1; i<=MAX; i++){  
        v[selfNum(i)] = true; 
    }
    for(int i=1; i<=MAX; i++){
        if(v[i] == false) cout << i << "\n"; // 생성자를 가지지 않는 num 출력
    }
    return 0;
}

int selfNum(int num){   
    int sum = num;
    
    while(num !=0){ 
        sum += num%10;
        num = num/10;
    }
    return sum;
}