#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int a, int b) {
	int c;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main() {
	int result = (2 * 20) / gcd(2, 20);
	for (int i = 3; i < 20; i++) 
		result= result*i/gcd(result, i);
	

	cout << result << endl;

}