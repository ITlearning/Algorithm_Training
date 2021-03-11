#include <bits/stdc++.h>
using namespace std;

int main() {
	int x = -43;
	unsigned int y = x;
	
	cout << x << '\n';
	cout << y << '\n';
	
	// 부호가 있는 정수 -x 는 부호가 없는 정수 2(n)-x와 같다.
	
	int z = 5328;
	cout << __builtin_clz(z) << '\n'; // 비트 표현의 왼쪽에 연속해서 있는 비트 0의 개수
	cout << __builtin_ctz(z) << '\n'; // 비트 표현의 오른쪽에 연속해서 있는 비트 0의 개수
	cout << __builtin_popcount(z) << '\n'; // 비트 표현에서 비트 1의 개수
	cout << __builtin_parity(z) << '\n'; // 비트 표현에서 비트 1의 개수에 대한 패리티(parity, 짝수 또는 홀수)
	
	// 참고로 이 함수들은 int 형 정수만 지원하며, 함수 이름의 뒤에 ll을 덧붙이면 long long 형 정수를 지원하는 함수가 된다.
	
	// 비트셋(bitset)
	// C++ 표준 라이브러리는 비트셋 이라는 자료구조를 제공하며, 이는 원소가 0 또는 1인 배열과 같이 쓸 수 있다.
	bitset<10> s;
	s[1] = 1;
	s[3] = 1;
	s[4] = 1;
	s[7] = 1;
	cout << s[4] << '\n';
	cout << s[5] << '\n';
	cout << s.count() << '\n';
	
	// 비트 연산을 비트셋에 대해서도 그대로 적용할 수 있다.
	cout << ~s << endl;
}

