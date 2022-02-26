#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, s;
	cin >> n >> s;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	vector<vector<bool>> dp(n + 1, vector<bool>(s + 1, false));
	dp[0][0] = true;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= s; j++)
		{
			dp[i + 1][j] = dp[i + 1][j] | dp[i][j];
			if (j + v[i] <= s)
				dp[i + 1][j + v[i]] = dp[i + 1][j + v[i]] | dp[i][j];
		}
	}

	if (dp[n][s])
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}
