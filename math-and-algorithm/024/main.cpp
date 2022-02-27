#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	int N;
	cin >> N;

	double P, Q;
	double Answer = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> P >> Q;
		Answer += Q / P;
	}

	printf("%.12lf\n", Answer);
	return 0;
}