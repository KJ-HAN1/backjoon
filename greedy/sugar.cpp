/*
2022_09_08
backjoon 2839 - sugar  https://www.acmicpc.net/problem/2839
*/
#include <iostream>
using namespace std;
int main() {
    int kg; //봉지 무게
    cin >> kg;
    int a,b; //5,3 키로봉지 갯수
    a = kg/5;
    while(1)
    {
        if(a < 0) 
        {
            cout << "-1";
            return 0;
        }
        if((kg-(5*a))%3 == 0)
        {
            b = (kg-(5*a))/3;
            break;
        }
        a--; // 딱맞게 나누어 떨어지지 않을경우 5kg무개를 하나빼고 3kg 봉지를 늘려계산
            //맞아떨어지지 않을 시a<0를 유도하여 -1 출력
    }
    cout << a+b;
    return 0;
}