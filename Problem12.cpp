#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int calc(int n) {
	vector<int> v;
	int ans = 1;

	for (int i = 2; n>1; i++) {
		if (n % i == 0) {
			n /= i;
			v.push_back(1);
			int index = v.size() - 1;
			while (n%i == 0) {
				n /= i;
				v[index]++;
			}
		}
	}
	for (int i = 0; i < v.size(); i++)
		ans *= v[i] + 1;
	return ans;
}

int main() {
	int i = 1;
	int sum = 1;
	while (true) {
		i++;
		sum += i;
		if (calc(sum) >= 500)
			break;
	}
	cout << sum << endl;
	
}
