// Case #1: 2
#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int arr[98765];
    for(int i=0;i<N;i++){
        int a,b;
        cin >> a >> b;
        arr[i] = a+b;
    }
    for(int i=1;i<=N;i++){
        cout << "Case #"<<i<<": "<<arr[i-1] << endl;
    }
    return 0;
}