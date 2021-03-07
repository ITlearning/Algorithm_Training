#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string text;
	cin >> text;
	int cnt = 1;
	int max = 1;
	int len = text.length();
	for(int i = 0; i <= len; i++) {
		if(text[i] == text[i - 1]) {
			cnt++;
		} else {
			if(max < cnt) {
				max = cnt;
			}
			cnt = 1;
		}
		
	}
	
	
	cout << max << '\n';
}