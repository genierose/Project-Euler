/*#include<stdio.h>
#include<iostream>
using namespace std;
int isPrime(int n) {

// 쌍둥이소수는 3을 제외한 나머지가 다  6K+1 6k-1 형태로 나타남

	if (n % 3 == 0)
		return false;

	if (n < 8) return true;

	int factor = 5;
	while (factor <= sqrt(n)) {

		if (n % factor == 0 || n % (factor + 2) == 0)
			return false;

		factor += 6;

	}
	return true;
}

int main() {// 2를 제외한 소수는 홀수형태
	int count = 2;
	int result = 0;
	for (int i = 3; count < 10001; i += 2) {
		if (isPrime(i)) {
			result = i;
			count++;

		}

	}

	cout << result << endl;


}
*/