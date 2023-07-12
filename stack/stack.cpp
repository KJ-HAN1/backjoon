#include<iostream>
#include<stack>
#include<string>

using namespace std;
int N;
string str;
stack<int> s;

void push(int x){
    s.push(x);
}
void pop(){
    if(s.empty()) cout << "-1" << endl;
    else{
        cout <<s.top() << endl;
        s.pop();
    }
}
void size(){
    cout << s.size()<< endl;
}
void empty(){
    if(s.empty()) cout << "1" << endl;
    else cout << "0" << endl;
}
void top(){
    if(s.empty()) cout << "-1" << endl;
    else cout << s.top() << endl;
}

int main(){
    cin >> N;
    for(int i=0; i<N;i++){
        cin >> str;
        if(str == "push"){
            int y;
            cin >> y;
            push(y);
        }else if(str == "pop") pop();
        else if(str =="size") size();
        else if(str =="empty") empty();
        else if(str == "top") top();
    }
    return 0;
}
