#include<iostream>

using namespace std;

int main(){
	int N;
	cin >> N;

	for(int i = 1; i <= N; i++) {
		for(int k = 0; k < N - i; k++)
			cout << ' ';
		for(int k = 0; k < i + (i - 1); k++)
			cout << '*';

		cout << '\n';	
	}

	for(int i = N - 1; i > 0; i--) {
		for(int k = 0; k < N - i; k++)
			cout << ' ';
		for(int k = 0; k < i + (i - 1); k++)
			cout << '*';

		cout << '\n';	
	}

	return 0;
}