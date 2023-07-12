/* 2022_11_28
backjoon zero https://www.acmicpc.net/problem/10773

*/
#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> st;
    int N,K;
    cin >>N;
    int sum=0;

    for(int i=0; i<N;i++){
        cin >> K;
        if(K == 0) st.pop();
        else st.push(K);
    }
    
    while(!st.empty()){
        sum += st.top();
        st.pop();
    }
    
    cout << sum;
    return 0;
}