/*
2023_05_18
backjoon 1715 - card  https://www.acmicpc.net/problem/1715
priority_queue 활용
*/

#include <iostream>
#include <queue>
#include <functional> // greater

using namespace std;
priority_queue<int, vector<int>, greater<int> > pq; // greater를 활용해 오름차순 우선순위 큐로 활용

int main(){
    int N;
    cin >> N;
    int n;
    int sum=0;

    for(int i=0;i<N; i++){
        cin >> n;
        pq.push(n);
    }
    while(pq.size() >1){
        int a,b;

        a = pq.top(), pq.pop();
        b = pq.top(), pq.pop();
        sum += a+b;
        pq.push(a+b);
    }
    cout << sum << endl;

    return 0;
}