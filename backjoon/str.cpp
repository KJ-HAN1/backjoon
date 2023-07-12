#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    
    while(n--){
        cin >> s;
        cout << s[0] << s[s.size() - 1];
    }
    

    return 0;
}