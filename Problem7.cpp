/*#include<stdio.h>
#include<iostream>
using namespace std;
int isPrime(int n) {

// �ֵ��̼Ҽ��� 3�� ������ �������� ��  6K+1 6k-1 ���·� ��Ÿ��

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

int main() {// 2�� ������ �Ҽ��� Ȧ������
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