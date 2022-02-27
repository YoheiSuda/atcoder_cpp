#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    int N;
	cin >> N;

	int B[N], R[N];
	double AnswerB = 0.0;
	double AnswerR = 0.0;
	for (int i = 0; i < N; i++) {
		cin >> B[i];
		AnswerB += 1.0 * B[i] / N;
	}
	for (int i = 0; i < N; i++) {
		cin >> R[i];
		AnswerR += 1.0 * R[i] / N;
	}

	printf("%.12lf\n", AnswerB + AnswerR);
	return 0;
}