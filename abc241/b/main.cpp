#include "bits/stdc++.h"
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	long long A[N + 1], B[M + 1];


	map<int, int> menCounts;

	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
		if (menCounts.count(A[i]) == 0)
		{
			menCounts[A[i]] = 1;
 		} else {
			menCounts[A[i]] += 1;
		}
	}

	for (int i = 1; i <= M; i++) {
		cin >> B[i];
		if (menCounts.count(B[i]) == 0)
		{
			cout << "No" << endl;
			return 0;
		} else {
			menCounts[B[i]] -= 1;
			if (menCounts[B[i]] < 0) 
			{
				cout << "No" << endl;
				return 0;
			}
		}
	}

	cout << "Yes" << endl;
	return 0;
}