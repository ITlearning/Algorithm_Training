#include <bits/stdc++.h>
using namespace std;

vector<int> subset;
int n = 3;

void search(int k) {
	if (k == n + 1) {
		for(int i = 0; i < subset.size(); i++) {
			cout << subset[i] << ' ';
		}
		cout << endl;
	}
	else {
		subset.push_back(k); // k를 부분집합에 포함시킨다.
		search(k+1);
		
		subset.pop_back(); // k를 부분집합에 포함시키지 않는다.
		search(k+1);
	}
}

int main() {
	search(1);
}