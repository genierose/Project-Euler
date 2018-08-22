/*#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


long long sum(vector<int> v) {
	long long result = 0;
	const int ten = 10;
	for (auto i : v) {
		while(i > 0) {
			cout << i << endl;
			result += i % ten;
			i/= ten;
		}
	}
	return result;

}

void calc(vector<int>&v, int operand) {
	int upper = 0;
	const int mod = 10;
	for (auto &i : v) {
		
	
		i *= operand;
	

		i += upper;
	

		upper=i/mod;
		

		i %= mod;
	

	}

	if (upper > 0) {
		v.push_back(upper);
	}




}





int main() {
	const int base = 2;
	const int digit = 1000;
	vector<int> v{2};
	

	for (int i = 1; i <digit; i++) {
		calc(v, base);	
	}
	cout <<sum(v) << endl;
}
*/
