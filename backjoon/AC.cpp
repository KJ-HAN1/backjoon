#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        string p, arr_str;
        int n;
        cin >> p >> n >> arr_str;
        
        deque<int> arr;
        int num = 0;
        
        for (char c : arr_str) {
            if (c >= '0' && c <= '9') {
                num = num * 10 + (c - '0');
            } else {
                if (num != 0) {
                    arr.push_back(num);
                    num = 0;
                }
            }
        }
        
        bool reverse = false;
        bool error = false;
        
        for (char cmd : p) {
            if (cmd == 'R') {
                reverse = !reverse;
            } else if (cmd == 'D') {
                if (arr.empty()) {
                    error = true;
                    break;
                }
                if (reverse) {
                    arr.pop_back();
                } else {
                    arr.pop_front();
                }
            }
        }
        
        if (error) {
            cout << "error\n";
        } else {
            cout << '[';
            if (reverse) {
                while (!arr.empty()) {
                    cout << arr.back();
                    arr.pop_back();
                    if (!arr.empty()) {
                        cout << ',';
                    }
                }
            } else {
                while (!arr.empty()) {
                    cout << arr.front();
                    arr.pop_front();
                    if (!arr.empty()) {
                        cout << ',';
                    }
                }
            }
            cout << "]\n";
        }
    }
    
    return 0;
}