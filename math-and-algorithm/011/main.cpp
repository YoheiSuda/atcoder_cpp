#include <iostream>
using namespace std;

int N;
bool prime[100000009];

int main() {
	cin >> N;

	for (int i = 2; i <= N; i++)
	{
		prime[i] = true;
	}

	// エラトステネスの篩
	for (int i = 2; i * i <= N; i++)
	{
		if (prime[i] == true)
		{
			for (int x = 2 * i; x <= N; x += i)
			{
				prime[x] = false;
			}
			
		}
	}

	for (int i = 2; i <= N; i++)
	{
		if (prime[i] == true) 
		{
			cout << i << endl;
		}
		
	}
	
	return 0;
}