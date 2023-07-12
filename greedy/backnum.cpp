/*
2023_06
backjoon 1439 - 뒤집기  https://www.acmicpc.net/problem/1439
*/
#include <iostream>

using namespace std;

int main(){

    string s;
    int zero_cnt =0;
    int one_cnt = 0;

    cin >> s;
    if(s[0] == '0') zero_cnt++;
    else one_cnt++;

    for(int i=1; i<s.size();i++){
        if(s[i] != s[i-1]){
            if(s[i]=='0') zero_cnt++;
            else one_cnt++;
        }
    }

    cout << min(zero_cnt, one_cnt);
    return 0;
}