#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long tmp = 0;
	long long n;
	long long a;
	cin >> n;
	long long *p = new long long [n];
	for(int i = 0; i < n; i++) {
		p[i] = 0;
	}
	
	for(int i = 0; i < n-1; i++) {
		cin >> a;
		p[a] = 1;
	}
	
	for(int i = 0; i <= n; i++) {
		if(p[i] == 0) {
			tmp = i;
		}
	}
	
	cout << tmp << '\n';
}