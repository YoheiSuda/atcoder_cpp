#include <iostream>
using namespace std;

int main() {
	int N;

	cin >> N;

	int A[N + 1];
	int Answer = 0;

	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
		Answer += A[i];
	}

	cout << Answer << endl;
}