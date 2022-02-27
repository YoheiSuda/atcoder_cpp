#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	int N;
	cin >> N;

	double A[N], B[N];

	double Answer = 0.0;
	for (int i = 0; i < N; i++)
		cin >> A[i];
	for (int i = 0; i < N; i++)
		cin >> B[i];

	for (int i = 0; i < N; i++)
	{
		Answer += A[i] / 3 + B[i] / 3 * 2;
	}

	printf("%.12lf\n", Answer);
	return 0;
}