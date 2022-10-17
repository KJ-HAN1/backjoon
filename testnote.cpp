#include<iostream>

using namespace std;

int main(){

    int a,b;
    int n = 3;
    pair<int,int> parry[10]; // pair array

    for(int i=0; i <n; i++){
        cin >> a >> b;
        parry[i].first = a;
        parry[i].second = b;
    }

    for(int j = 0; j < n; j++){
        cout << "parry" << j << " = " << parry[j].first <<" " << parry[j].second <<endl;
    }
    

    
    return 0;
}