#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int h[N];
	int dp[N];
	dp[0] = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> h[i];
		if (i == 0)
		{
			dp[0] = 0;
		}
		if (i == 1)
		{
			dp[i] = abs(h[i] - h[i - 1]);
		}
		if (i >= 2)
		{
			int h1 = abs(h[i] - h[i - 1]) + dp[i - 1];
			int h2 = abs(h[i] - h[i - 2]) + dp[i - 2];
			dp[i] = min(h1, h2);
		}
	}

	cout << dp[N - 1] << endl;
	return 0;
}