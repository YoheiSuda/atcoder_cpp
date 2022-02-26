#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int A[N + 1];

	long long count100 = 0, count200 = 0, count300 = 0, count400 = 0;

	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
		switch (A[i])
		{
		case 100:
			count100++;
			break;

		case 200:
			count200++;
			break;

		case 300:
			count300++;
			break;

		case 400:
			count400++;
			break;

		default:
			break;
		}
	}

	cout << count100 * count400 + count200 * count300 << endl;
}