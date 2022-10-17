/*
2022_10_17
backjoon 1931 coin https://www.acmicpc.net/problem/1931
*/
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    int n; // n = 회의의 수
    int start, end; //start = 회의시작시간 end = 회의종료시간
    cin >> n;
   
    vector<pair<int,int>> time; // 회의 타임 pair vector로 입력

    for(int i = 0; i < n; i++){
        cin >> start >> end;
        time.push_back(make_pair(end, start));
    }
    sort(time.begin(), time.end());

    int temp = time[0].first; //가장빠른 end time
    int count = 1;
    for (int i = 1 ;i < n; i++){
		if (temp <= time[i].second) //end time과 다음 스케줄 start타임
		{
			count++;
			temp = time[i].first;
		}
	}
    cout << count;

    return 0;
}