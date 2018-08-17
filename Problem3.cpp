
/* 일반적으로 소인수 분해할때 제곱근까지만 구함
그러나 3번문제의 답은 구할 수 없음
for (int i = 2; i*i <= sqrt(value); i++)
if (value% i == 0)
result = i;
*/


/*
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;



int main() {// 1~10000까지의 소수를 에라토스테네스의 체를 이용하여 구함
	long long int value = 600851475143;
	int result = 0;

	bool array[10001];
	memset(array, true, sizeof(array));

	for (int i = 2; i*i <= 10000; i++) {
		if (array[i])
			for (int j = i; j <= 10000; j += i)
				array[j] = false;

	}

	for (int i = 2; i <= 10000; i++) {// 그후 소인수분해
		if (array[i]) 
			if ((int)(value % i)== 0)
				result = i;
	}

		

	





	cout << result << endl;
}
*/