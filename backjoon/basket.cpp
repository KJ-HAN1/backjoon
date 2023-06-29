/*
2023_06_29
backjoon 10811 바구니 뒤집기 https://www.acmicpc.net/problem/10811
*/
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    int arr[100]; 
    for(int p=0;p<100;p++) arr[p]=p+1;
    while(m-->0) // 1씩 감소하는데 0 이상일 경우
    {
        cin>>i>>j;
        reverse(arr+i-1,arr+j); // reverse 함수는 index를 받음
    }
    for(int p=0;p<n;p++) cout<<arr[p]<<" ";
}