#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int A[N];

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	long long count = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				for (int l = k + 1; l < N; l++)
				{
					for (int m = l + 1; m < N; m++)
					{
						if (A[i] + A[j] + A[k] + A[l] + A[m] == 1000) {
							count++;
						}
					}
				}
			}
		}
	}

	cout << count << endl;
}