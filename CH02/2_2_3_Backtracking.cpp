// 퇴각 검색
// 체스판에서의 퀸을 배치한다
// 행마다 정확히 하나의 퀸을 배치하되, 그 퀸이 이전 단계에서 배치한
// 퀸을 공격할 수 없도록 배치한다.

#include <bits/stdc++.h>
using namespace std;

int counts = 0;
const int n = 4;
int col[n*n];
int diag1[n*n];
int diag2[n*n];

void search(int y) {
	if (y == n) {
		counts++;
		cout << counts << endl;
		return;
	}
	for(int x = 0; x < n; x++) {
		if(col[x] || diag1[x+y] || diag2[x-y+n-1]) continue;
		col[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
		search(y + 1);
		col[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
	}
}

int main() {
	search(0);
}