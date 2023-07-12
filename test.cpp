#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
<<<<<<< HEAD
    while(1){
        int a,b;
        cin >> a >> b;
        if(a == 0 && b == 0) break;
        cout << a+b << endl;
        
=======

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
>>>>>>> 2fb4681af9f357c16323f1d4c03ce37e6329a6fe
    }
    return 0;
}