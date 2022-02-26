#include <bits/stdc++.h>
using namespace std;

int main() {
	long long N;

	cin >> N;

	long long N2 = N;

	for (long long i = 2; i * i <= N; i++)
	{
		while (N2 % i == 0) {
			N2 /= i;
			cout << i << endl;
		}
	}

	if (N2 != 1) {
		cout << N2 << endl;
	}
	return 0;
}