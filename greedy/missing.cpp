#include<iostream>
#include<string>

using namespace std;

int main(){

    string num; //정답입력
    string temp;
    int sum=0;
    bool minus = false; // '-'부호 판별
    
    cin >> num;

    for(int i=0; i<=num.size();i++){
        
        if(num[i] == '+' || num[i] == '-' || i == num.size()){ //각 기호들을 만나면 +연산 / '-'가 true상태에선 이후 모두 -연산
            if(minus == true){
                sum -= stoi(temp); 
                temp = "";
            }else{
                if(num[i] == '-') minus = true;
                sum += stoi(temp); //연산기호가 아닐경우는 temp에 해당하는 숫자를 입력
                temp="";
            }
        } 
        else temp += num[i];
    }
    cout << sum;

    
    return 0;
}