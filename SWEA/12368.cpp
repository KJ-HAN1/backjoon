#include<iostream>

using namespace std;

int main(){

    int test_case;
    int T;

    cin >> T;

    for(test_case = 1; test_case<=T;test_case++){
        int a,b;
        int sol;
        cin >> a >> b;
        if(a+b >=24) sol = (a+b)-24;
        else sol = (a+b);
        cout << "#" << test_case << " " << sol <<endl;
    }
    return 0;
}