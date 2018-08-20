#include<stdio.h>
#include<iostream>
using namespace std;
int main() {
	// 유클리드의 공식 a  = m^2 - n^2  b = 2mn, c= m^2+n^2

	long long int ans = 0;
	for (int i = sqrt(500 / 2); i*i < 500; i++)  //  m(m+n) =500; m의 범위 m^2 < m(m+n); < 2m^2; 
		for (int j = 1; j < i; j++)
			if (i*(i + j) == 500)
				ans = (i*i - j * j) * 2 * i*j * (i*i + j * j); // a * b * c ;




	cout << ans << endl;




}