#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int checkpalindrome(int num) {// 4~6자리
	string s = to_string(num);
	int count = 0;
	for (int i = 0; i < s.length() / 2; i++)
		if (s[i] == s[s.length() - 1 - i])
			count++;
	if (count == s.length() / 2)  return 1;
	else	return 0;
}



int main() {
	int ans = 0;
	for (int i = 999; i*i > 1000; i--) {// 999~ sqrt(1000)까지
		for (int j = 999; j*j > 1000; j--) {

			if (checkpalindrome(i*j) && ans < i*j)	ans = i * j;
		}
	}

	cout << ans << endl;


}
