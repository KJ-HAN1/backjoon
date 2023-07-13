#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){

    int n=123;
    int sum =0;
    while(true){
        sum += n%10;
        n = n/10;
        if(n == 0) break;
        cout << sum<<endl;
    }
    // cout << n/10;
    return 0;
}