#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include <queue>
using namespace std;
vector<pair<int,int>> room; 
priority_queue<int, vector<int>, greater<int>> pq;

int main()
{
	int N;
	cin >> N;
	int a,b;
	for (int i = 0 ; i < N ; i++)
	{
		cin >> a >> b;
		room.push_back(make_pair(a,b));
	}
	
	// 시작시간을 기준으로 오름차정렬 
	sort(room.begin(), room.end());
	
	// 첫 번째 수업의 끝나는 시간을 pq에 추가 
	pq.push(room[0].second);
	
	for (int j = 1 ; j < N ; j++)
	{
		if (pq.top() <= room[j].first)
		{
			pq.pop();
			pq.push(room[j].second);
		}
		
		else
		{
			pq.push(room[j].second);
		}
	}
	
	cout << pq.size();

	return 0;
}