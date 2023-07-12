#include<iostream>

using namespace std;

int main() {
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; test_case++) {
		int N;
		cin >> N;
		bool sol = false;
		for (int i = 1; i < 10; i++) {
			if (N%i == 0 && (N / i) < 10) sol = true;
		}
		if(sol == true)
			cout << "#" << test_case << " " << "Yes" <<endl;
		else cout << "#" << test_case << " " << "No" << endl;
	}
	return 0;

}