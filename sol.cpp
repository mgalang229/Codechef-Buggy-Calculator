#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int a, b;
	cin >> a >> b;
	vector<int> A, B;
	while(a) {
		A.push_back(a % 10);
		a /= 10;
	}
	while(b) {
		B.push_back(b % 10);
		b /= 10;
	}
	while(A.size() < B.size()) {
		A.push_back(0);
	}
	while(B.size() < A.size()) {
		B.push_back(0);
	}
	for(int i = 0; i < (int) A.size(); ++i) {
		A[i] += B[i];
	}
	int ans = 0;
	reverse(A.begin(), A.end());
	for(auto it : A) {
		ans = ans * 10 + it % 10;
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	//test_case();
	return 0;
}
