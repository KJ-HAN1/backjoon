/*
2022_06_17
backjoon 1253exchange https://www.acmicpc.net/problem/1253
*/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N;
    int cnt = 0;
    cin >> N;
    vector<int> v(N, 0);


    for(int i=0;i<N;i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());   //배열 정렬

    for(int k=0; k<N; k++){
        int i = 0;      //투포인터(i,j) 활용
        int j  = N-1;
        while(i<j){
            if(v[i]+v[j] == v[k]){
                if(i != k && j != k){ //자기자신을 활용해 좋은수 만들기 x
                    cnt ++;
                    break;
                }
                else if( i == k ) i++;//자기자신을 활용x 수 옮겨주기
                else if( j == k ) j--;
            }
            else if(v[i] + v[j] > v[k]) j--; // 찾는값보다 크면 j를 줄여가며 찾음
            else i++;   // 찾는값보다 작으면 i를 늘여가며 찾음
        }
    }
    cout << cnt;

    return 0;
}