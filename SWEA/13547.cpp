#include<iostream>

using namespace std;

int main(){

    int test_case;
    int T;
    cin >> T;
    
    
    int lose;
    for(test_case = 1; test_case<=T;test_case++){
        lose =0;
        char game[16]={0};
        cin >> game;

        for(int i=0; i<15;i++){
            if(game[i]=='x') lose ++;  
        }
        if(lose>=8){
            cout << "#" << test_case << " " << "NO" << endl;
        }
        else cout << "#" << test_case << " " << "YES" << endl;
    }
    return 0;
}