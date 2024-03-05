/*
2023_07_11
backjoon 1744 - 수묶기  https://www.acmicpc.net/problem/1744
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int sol=0;
    int N;
    cin >> N;
    vector<int> plus;
    vector<int> minus;
    
    // 음수와 양수를 각 다른 배열에 저장
    for(int i=0;i<N;i++){
        int a;
        cin >> a;
        if(a<=0) minus.push_back(a);
        else plus.push_back(a);
    }
    sort(minus.begin(), minus.end());
    sort(plus.begin(), plus.end());

    // 양수 계산 ( 큰수부터 곱하고 더해나감)
    // 두수를 묶어서 더할때 곱하는게 큰지 더하는게 큰지 확인 
    // ex)1과 다른수는 곱보다 합이 더 크다 2*1=2 , 2+1 =3
    for(int i=plus.size()-1;i>=0;i-=2){ 
        int sum=plus[i];
        int mul=plus[i];
        if(i - 1 >= 0){
            sum += plus[i-1];
            mul *= plus[i-1];
        }
        sol += max(sum, mul);
    }
    //음수계산 ( 작은수부터 곱 우선 )
    //덧셈결과는 비교하지 않음 곱셈이 무조건 크기때문
    for(int i=0; i<minus.size();i+=2){
        int mul = minus[i];
        if(i+1<minus.size()) mul *= minus[i+1];
        sol += mul;
    }

    cout << sol;
    return 0;
}