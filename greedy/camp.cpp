#include<iostream>

using namespace std;

int main(){

    int L,P,V;
    int sum;
    int Case = 1;

    while(1){
        sum = 0;
        cin >> L >> P >> V;
        if(L == 0 && P ==0 && V == 0) break;

        sum += (V/P)*L;
        if(V%P > L) sum += L;
        else sum += V%P;

        cout << "Case " << Case << ": " << sum << endl;
        Case ++;
    }
    

    return 0;
}