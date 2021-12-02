#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// n should greater than or equal to 21 in order to divide
		// it distinctly to six people
		cout << (n >= 21 ? "YES" : "NO") << '\n';
	}
	return 0;
}
