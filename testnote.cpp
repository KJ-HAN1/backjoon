#include<iostream>
#include<string>
using namespace std;

int main(){
    string a;
    cin >> a;
    cout << a << endl;

    string n;
    cin >> n;

    for(int i=0; i<3;i++){
        a += n[i];
    }
    cout << a << endl << "xxxxx";
    return 0;
}