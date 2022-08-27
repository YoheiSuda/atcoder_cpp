#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	long long A[N + 1];
	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}

	long long dp1[N + 1], dp2[N + 1];
	dp1[0] = 0;
	dp2[0] = 0;

	for (int i = 1; i <= N; i++) {
		dp1[i] = dp2[i - 1] + A[i];
		dp2[i] = max(dp1[i - 1], dp2[i - 1]);
	}

	long long Answer = 0;

	Answer = max(dp1[N], dp2[N]);

	cout << Answer << endl;
	return 0;
}