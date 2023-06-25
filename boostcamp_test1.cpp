#include<iostream>
#include<algorithm>
#include<queue>
# define MAX 101

using namespace std;

int arr[MAX];
int N;
int compare;
int cnt;
int anwer[MAX];
int idx;
queue<int> q;

void sol(int a[]){
    sort(arr, arr+N);
    for(int i=0;i<N;i++){
        cnt = 0;
        idx = 0;
        if(compare == arr[i]) continue;
        else compare = arr[i];

        for(int j=i+1;j<N;j++){    
            if(arr[i] == arr[j]){
                cnt++;
            }
        }
        if(cnt != 0) q.push(cnt+1);
    }

    if(q.empty() == false){
        while(!q.empty()){
            anwer[idx] = q.front();
            q.pop();
            idx++;
        }
    }else anwer[0] = -1;
}

int main(){
    
    cin >> N;

    for(int i=0;i<N;i++){
        cin >> arr[i];
    }

    sol(arr);
    for(int i=0; i<N;i++){
        if(anwer[i] == 0) break;
        cout << anwer[i] << " ";

    }


    return 0;
}