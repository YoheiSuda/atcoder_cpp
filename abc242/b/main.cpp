#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;

	vector<char> arr;

	for (int i = 0; i < s.length(); i++) {
		arr.push_back(s[i]);
	}

	sort(arr.begin(), arr.end());

	string answer(arr.begin(), arr.end());

	cout << answer << endl;
	return 0;
}