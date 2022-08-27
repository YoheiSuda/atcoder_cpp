#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N, X;
	cin >> N >> X;

	vector<long long> A;
	for(int i = 1; i <= N; i++) {
		long long AElem;
		cin >> AElem;
		A.push_back(AElem);
	}

	 if (*find(A.begin(), A.end(), X) == X) {
		 cout << "Yes" << endl;
		 return 0;
	 }

	 cout << "No" << endl;
	 return 0;
}