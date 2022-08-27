#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, W;
	cin >> N >> W;

	long long w[N + 1], v[N + 1];

	for (int i = 1; i <= N; i++)
	{
		cin >> w[i] >> v[i];
	}

	// 重さと商品数で配列を組んであげれば良さげ？
	long long dp[N + 1][W + 1];
	dp[0][0] = 0;
	for (int i = 1; i <= W; i++) {
		dp[0][i] = 0;
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 0; j <= W; j++) {
			if (j < w[i]) {
				dp[i][j] = dp[i - 1][j];
			} else {
				dp[i][j] = max(dp[i-1][j], dp[i-1][j - w[i]] + v[i]);
			}
		}
	}
	long long Answer = 0;

	for (int i = 0; i <= W; i++) {
		Answer = max(Answer, dp[N][i]);
	}

	cout << Answer << endl;
	return 0;
}