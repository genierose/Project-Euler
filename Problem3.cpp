
/* �Ϲ������� ���μ� �����Ҷ� �����ٱ����� ����
�׷��� 3�������� ���� ���� �� ����
for (int i = 2; i*i <= sqrt(value); i++)
if (value% i == 0)
result = i;
*/


/*
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;



int main() {// 1~10000������ �Ҽ��� �����佺�׳׽��� ü�� �̿��Ͽ� ����
	long long int value = 600851475143;
	int result = 0;

	bool array[10001];
	memset(array, true, sizeof(array));

	for (int i = 2; i*i <= 10000; i++) {
		if (array[i])
			for (int j = i; j <= 10000; j += i)
				array[j] = false;

	}

	for (int i = 2; i <= 10000; i++) {// ���� ���μ�����
		if (array[i]) 
			if ((int)(value % i)== 0)
				result = i;
	}

		

	





	cout << result << endl;
}
*/