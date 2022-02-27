#include <bits/stdc++.h>
using namespace std;

int n;
string s[1005];

void check(int x, int y, int dx, int dy) {
	if (x + dx * 5 < 0 || x + dx * 5 >= n || y + dy * 5 < 0 || y + dy * 5 >= n)
		return;
	int cnt = 0;
	for (int i = 0; i < 6; i++)
		if (s[x + dx * i][y + dy * i] == '#')
			cnt++;
	if (cnt + 2 >= 6) {
		cout << "Yes" << endl;
		exit(0);
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> s[i];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			check(i, j, 0, 1);
			check(i, j, 1, 0);
			check(i, j, -1, 1);
			check(i, j, 1, 1);
		}
	}
	cout << "No" << endl;
	return 0;
}
