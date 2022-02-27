#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    int N;
	cin >> N;

	int A[N];
	long long B[100000] = {};
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
		B[A[i]]++;
	}

	long long count = 0;
	for (long long i = 1; i < 50000; i++)
	{
		if (B[i] > 0 && B[100000 - i] > 0) {
			count += B[i] * B[100000 - i];
		}
	}

	if (B[50000] >= 2) {
		count += B[50000] * (B[50000] - 1) / 2;
	}
	
	cout << count << endl;
	return 0;
}