/*
2023_09_08
backjoon 9012 - 괄호  https://www.acmicpc.net/problem/9012

*/
#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){

    int testCase;
    cin >> testCase;

    for(int i=0;i<testCase;i++){
        string s;
        cin >> s;
        stack<char> st;
        string answer = "YES";

        for(int j=0;j<s.length();j++){
            if(s[j] == '('){
                st.push(s[j]);
            }else if(!st.empty() && s[j] == ')' && st.top() == '('){
                st.pop();
            }else answer = "NO";
              
        }
        if(!st.empty()) answer ="NO";

        cout << answer <<"\n";
    }
    return 0;
}