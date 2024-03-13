/*
2024_03_11
kukjin_Han
baekjoon 2667 단지 번호 붙이기
BFS 활용 해결
*/
#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
#define MAX 26
using namespace std;

int N;
int cnt;
string home;
int group[MAX][MAX] = {0, };
bool visit[MAX][MAX] = {0, };
int x_dir[4] = {-1,1,0,0};
int y_dir[4] = {0,0,-1,1};
queue<pair<int,int>> q;
vector<int> home_num;


void BFS(int x,int y){ // 집이 있거나 아직 방문처리 되지 않은 좌표가 넘어옴
    q.push(make_pair(x,y));
    visit[x][y] = true; //방문처리
    cnt++;  //집 갯수 세기

    while(!q.empty()){
        int a = q.front().first;
        int b = q.front().second;
        q.pop();
        for(int i=0; i<4;i++){
            int x_new = a+x_dir[i];
            int y_new = b+y_dir[i];

            //x와 y축 기준 상하좌우 1칸씩 이동한 좌표가
            //0보다 작거나 N보다 크지 않으면서
            //방문한적이 없으면서 집이 있는경우
            if(0<=x_new && x_new<N && 0<=y_new && y_new<N && 
            visit[x_new][y_new] == false && group[x_new][y_new] == 1){
                q.push(make_pair(x_new,y_new));
                visit[x_new][y_new] = true;
                cnt ++;
            }
        }
    }
}

int main(){

    cin >> N;

    for(int i=0;i<N;i++){   //n*n 생성
        cin >> home;
        for(int j=0;j<N;j++){
            group[i][j] = home[j] - '0';
        }
    }


    for(int i=0;i<N;i++){   //n*n 생성
        for(int j=0;j<N;j++){
            if(group[i][j] == 1 && !visit[i][j]){   // 집이 있거나(1), 아직 방문되지 않은곳
                cnt = 0;
                BFS(i,j);
                home_num.push_back(cnt);
            }
        }
    }
    
    
    sort(home_num.begin(), home_num.end()); //집의 개수 오름차순 정렬

    cout << home_num.size() <<"\n"; //단지 수
    for(int i=0;i< home_num.size();i++){
        cout << home_num[i] <<"\n";
    }
    return 0;
}