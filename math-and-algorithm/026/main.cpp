#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	int N;
	cin >> N;

	double Answer = 0.0;
	for (int i = N; i >= 1; i--) {
		Answer += 1.0 * N / i;
	}

	printf("%.12lf\n", Answer);
	return 0;
}