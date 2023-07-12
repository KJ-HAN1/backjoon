#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    // vector<int> v(N);
    int arr[N];

    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    // sort(v.begin(),v.end());
    sort(arr, arr+N);
    for(int i=0;i<N;i++){
        cout << arr[i]<<"\n";
    }
    return 0;
}