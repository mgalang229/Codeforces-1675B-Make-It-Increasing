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
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int cnt = 0;
		int prev = a[n - 1];
		bool valid = true;
		for (int i = n - 1; i >= 0; i--) {
			while (a[i] >= prev && i != n - 1 && a[i] > 0) {
				a[i] /= 2;
				cnt++;
			}
			if (a[i] == prev && i != n - 1) {
				valid = false;
				break;
			}
			prev = a[i];
		}
		cout << (valid ? cnt : -1) << '\n';
	}
	return 0;
}
