#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	long long A[N + 1];
	long long Answer;
	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
		if (i >= 2) {
			Answer = gcd(A[i], Answer);
		} else {
			Answer = A[i];
		}
	}

	cout << Answer << endl;
}