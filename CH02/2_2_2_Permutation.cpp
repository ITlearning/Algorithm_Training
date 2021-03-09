// 순열 생성하기
#include <bits/stdc++.h>
using namespace std;

vector<int> permutation;
// 각 순열이 저장된다.
const int n = 3;
bool chosen[n + 1];

// 각 원소를 순열에 포함했는지 여부를 나타낸다.
/*
void search() {
	if(permutation.size() == n) {
		for(int i = 0; i < permutation.size(); i++) {
			cout << permutation[i] << ' ';
		}
		cout << endl;
	} else {
		for(int i = 1; i <= n; i++) {
			if(chosen[i]) continue;
			chosen[i] = true;
			permutation.push_back(i);
			search();
			chosen[i] = false;
			permutation.pop_back();
		}
	}
}
*/

int main() {
	//search();
	
	// 1부터 3까지 vector 배열에 저장
	for(int i = 1; i <= n; i++) {
		permutation.push_back(i);
	}
	
	do {
		for(int i = 0; i < n; i++) {
			cout << permutation[i] << ' ';
		}
		
		cout << endl;
	}
	while(next_permutation(permutation.begin(), permutation.end()));
}