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
	long long int result = 5;
	for (int i = 3; i < 2000000;i+= 2) {
		if (isPrime(i)) {
			result += i;
		}

	}

	cout << result << endl;


}
*/
