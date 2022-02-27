#include <bits/stdc++.h>
using namespace std;

int main() {
	int A[10];
	for (int i = 0; i <= 9; i++)
	{
		cin >> A[i];
	}
	
	int index = 0;
	int count = 0;

	while (count < 3)
	{
		index = A[index];		
		count++;
	}
	
	cout << index << endl;
	return 0;
}