#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string text;
	cin >> text;
	int max = 0;
	int len = text.length();
	int *p = new int [len];
	for(int i = 0; i < len; i++) {
		p[i] = 0;
	}
	for(int i = 0; i < len; i++) {
		if(text[i] == text[i+1]) {
			p[text[i] - 'A'] += 1;
		} else if(i == len - 1) {
			p[text[i] - 'A'] += 1;
		}
		
	}
	
	for(int i = 0; i < len; i++) {
		if(max < p[i]) {
			max = p[i];
		}
	}
	
	cout << max << '\n';
}