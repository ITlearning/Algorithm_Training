#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	int max = 0;
	int total = 0;
	int *p = new int [t];
	for(int i = 0; i < t; i++) {
		cin >> p[i];
	}
	
	for(int i = 0; i < t - 1; i++) {
		int a = p[i];
		int b = p[i+1];
		if(a > b) {
			total += a-b;
		}
	}
	
	cout << total << '\n';
}