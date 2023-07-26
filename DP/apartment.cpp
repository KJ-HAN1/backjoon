/*
2023_07_27
backjoon 2775 - 부녀회장이 될테야  https://www.acmicpc.net/problem/2775
*/
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int Test_Case;
    int k,n; // k = 층, n = 호

    cin >> Test_Case;

    vector<vector<int>> apart(15,vector<int>(15));
    

    for(int i=1;i<=14;i++){
        apart[0][i] = i;
    }

    for(int i=1;i<=14;i++){
        for(int j=1;j<=14;j++){
            //1호는 무조건 1명 거주
            if(j == 1) apart[i][j] = 1;
            else apart[i][j] = apart[i][j-1]+apart[i-1][j];
        }
    }
    //정답 출력
    for(int i=0; i<Test_Case;i++){
        cin >> k >> n;
        cout << apart[k][n] << "\n";
    }
    
    return 0;
}