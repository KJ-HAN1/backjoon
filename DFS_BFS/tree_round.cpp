#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    int N;
    cin >> N;
    vector<string> v(N);

    for(int i=0;i<N;i++){
        cin >> v[i];
    }
    for(int i=0;i<N;i++){
        cout << v[i] << "\n";
    }
    cout << v.size();
    
}