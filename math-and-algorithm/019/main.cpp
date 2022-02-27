#include <bits/stdc++.h>
using namespace std;

long long getCombination(long long count) {
	if (count < 2)
	{
		return 0;
	}
	return count * (count - 1) / 2;
}

int main()
{
	long long N;
	cin >> N;
	long long A[N];

	long long countRed = 0, countYellow = 0, countBlue = 0;

	for (long long i = 0; i < N; i++)
	{
		cin >> A[i];
		switch (A[i])
		{
		case 1:
			countRed++;
			break;

		case 2:
			countYellow++;
			break;

		case 3:
			countBlue++;
			break;

		default:
			break;
		}
	}

	cout << getCombination(countRed) + getCombination(countYellow) + getCombination(countBlue) << endl;
}