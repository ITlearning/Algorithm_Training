#include <iostream>
using namespace std;

int array[5] = {3,3,4,1,2};
int tmp[5] = {0};
void countingSort(int array[], int s) {
	for(int i = 0; i < s; i++) {
		tmp[array[i] - 1]++;
	}
	
	for(int i = 0; i < s; i++) {
		if(tmp[i] != 0) {
			for(int j = 0; j < tmp[i]; j++) {
				cout << i+1 << ' ';
			}
		}
	}
	cout << endl;
}

int main() {
	countingSort(array,5);
}

// 배열의 수가 많아지면 쓰기 어려운 정렬이다.