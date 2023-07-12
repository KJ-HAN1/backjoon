#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int test_case;
    int T;

    cin >> T;
    
    long long N;
    long long num;

    for(int test_case=1;test_case<=T; test_case++){
        cin >> N;
        num = N-1;

        for(long long i=2; i<=sqrt(N);i++)
            if(N%i == 0) num = min(num, i+(N/i)-2);    
        cout << "#"<< test_case <<" "<< num << endl;
    }
    
    return 0;
}
