// 최대 부분 배열 합
// 배열에서 연속해 있는 값들을 택하여 그 합을 최대로 만드는 것.
#include <bits/stdc++.h>
using namespace std;

int max(int best, int sum) {
	if(best > sum) {
		return best;
	} else
		return sum;
}


int main() {
	int n = 8;
	int array[n] = {-1,2,4,-3,5,2,-5,2};
	int best = 0;
	int sum = 0;
	// O(n^3) 시간 풀이
	/*
	for(int a = 0; a < n; a++) {
		for(int b = a; b < n; b++) {
			int sum = 0;
			for(int k = a; k <= b; k++) {
				sum += array[k];
			}
			best = max(best,sum);
		}
	}
	*/
	
	// 변수 a와b는 부분 배열의 첫 번째 위치와 마지막 위치를 나타내고, 부분 배열의 합을 계산하여 변수 sum에 저장한다.
	// 변수 best에는 답을 구하는 과정에서 찾은 최대 합을 기록한다.
	// 이 알고리즘의 시간 복잡도는 O(n^3)이다.
	
	// O(n^2) 시간 풀이
	/*
	for(int a = 0; a < n; a++) {
		int sum = 0;
		for(int b = a; b < n; b++) {
			sum += array[b];
			best = max(best,sum);
		}
	}
	*/
	// 부분 배열의 오른쪽 끝을 이동해 가면서 그 합도 같이 계산해나간다.
	
	
	// O(n) 시간 풀이
	for(int k = 0; k < n; k++) {
		sum = max(array[k], sum+array[k]); 
		best = max(best,sum);
	}
	
	// 우리는 부분 배열 중에서 합이 최대인 것을 구하려 하므로, 위치 k-1에서 끝나는 부분 배열도 합이 최대인 부분 배열이어야 한다.
	// 따라서 배열을 왼쪽에서 오른쪽으로 살펴보면서, 각 위치에서 긑나는 최대 부분 배열 합을 계산하면 이 문제를 효율적으로 풀 수 있다.
	
	cout << best << '\n';
}