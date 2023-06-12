#include <iostream>
#include <set>

using namespace std;

int main(){

    int arr[10];
    int N;
    set<int> s;
    for(int i=0; i<10; i++){
        cin >> N;
        arr[i] = N%42;
    }
    
    for(int i=0; i<10; i++){
        s.insert(arr[i]);
    }
    // set<int>::iterator iter=s.begin();
	// for(iter;iter!=s.end();iter++)
	// 	cout<<*iter<<endl;
    cout << s.size();
    return 0;
}