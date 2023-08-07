#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> v(N);
    vector<int> sol(N);

    for(int i=0;i<N;i++){
        cin >> v[i];
    }
    int M;
    for(int i=0;i<N;i++){
        cin >> sol[i];
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(v[i] == sol[j]) cout << 1 << "\n";
            else cout << 0 <<"\n";
        }
    }
    return 0;
}