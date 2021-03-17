// 알고리즘 라이브러리 함수
// C++ 11 표준은 sort함수가 O(nlogn)에 동작해야 한다고 규정하고 있다.
// 실제 구현은 컴파일러에 따라 다를 수 있다.
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
	/*vector<int> v = {3,2,6,3,1,54,76,7,1};
	sort(v.begin(), v.end());
	
	for(int i = 0; i < v.size(); i++) {
		cout << v[i] << ' ';
	}*/
	
	// 비교 연산자
	vector<pair<int,int>> v;
	v.push_back({1,5});
	v.push_back({2,3});
	v.push_back({1,2});
	// 두 원소의 조합의 경우에는 먼저 첫번째 원소를 기준으로, 그리고 그 다음에는 두 번째 원소를 기준으로 정렬한다.
	sort(v.begin(), v.end());
	
	
	// 여러 원소 조합(tuple)
	vector<tuple<int,int,int>> v;
	v.push_back({2,1,4});
	v.push_back({1,5,3});
	sort(v.begin(), v.end());
	
	
	// 사용자 정의 구조체
	// 사용자 정의 구조체에는 기본 비교 연산자가 없다. 따라서 비교 연산자를 사용하려면 구조체 안에 함수 operator<를 정의해야 하며, 함수의 인자는 비교할 원소와 같은 자료형의 다른 값이다.
	struct point {
		int x,y;
		bool operator<(const point &p) {
			if(x == p.x) return p.y;
			else return x < p.x;
		}
	};
	
	
	// 비교 함수
	// 외부의 정의된 비교함수(Comparison function)를 sort 함수에 콜백 함수 형태로 줄 수도 있다.
	// 예를 들어 함수 comp는 문자열을 먼저 길이순으로, 그리고 그다음에는 알파벳순으로 정렬한다.
	
	bool comp(string a, string b) {
		if(a.size() == b.size()) return a < b;
		else return a.size() < b.size();
	}
	
	// 그러고 나면 문자열 벡터를 다음과 같이 정렬할 수 있게 된다.
	sort(v.begin(), v.end(), comp);
}