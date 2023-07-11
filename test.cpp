#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){

    map<int, int> m1;
    int N;
    cin >> N;

    for(int i=0;i<N;i++){
        int a;
        int s;
        cin >> s >> a;
        m1[s] = a;
    }
    for(int i=0;i<N;i++){
        cout << m1[i]<< endl;
    }
    return 0;
}