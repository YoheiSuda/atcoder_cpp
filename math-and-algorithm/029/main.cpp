#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int dp[N];
	dp[0] = 1;

	for (int i = 1; i <= N; i++)
	{
		if (i == 1) {
			dp[i] = 1;
			continue;
		}

		dp[i] = dp[i - 1] + dp[i - 2];
	}
	
	cout << dp[N] << endl;
	return 0;
}