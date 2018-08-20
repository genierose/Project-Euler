#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int length = 40;
	int value = 4000000;
	int result = 0;
	int array[40];

	array[0] = 0;
	array[1] = 1;
	array[2] = 2;

	for (int i = 3; i < length; i++)  array[i] = array[i - 1] + array[i - 2];

	for (int i = 1; i < length; i++) if (array[i] % 2 == 0 && array[i] < value)		result += array[i];


	cout << result << endl;



}
