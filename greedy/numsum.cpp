#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int n; //n = 도시의 갯수, km = 도시사이 도로의 거리
    int km[100000000];
    int price[1000000000]; // 기름L당 가격
    
    cin >> n;

    for(int i=0; i<(n-1); i++){
        cin >> km[i];
    }
    for(int i=0; i<n; i++){
        cin >> price[i];
    }

    int total =0; //총 드는 비용
    int minprice[1000000000] = sort(price,price+n);

    return 0;
}