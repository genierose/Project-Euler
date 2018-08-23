#include<stdio.h>
#include<iostream>
using namespace std;
int main() {
	int zeronum[] = { 0,3,3,5,4,4,3,5,5,4 };//∆Ì¿«ªÛ ...
	int tennum[] = { 3,6,6,8,8,7,7,9,8,8 };
	int tenmul[] = { 0,0,6,6,5,5,5,7,6,6 };
	int hundred = 7;
	int AND = 3;
	int thousand = 11;
	long long int ans = 0;


	for (int i = 0; i <1000; i++) {
		int temp = i;
		if (temp >= 100) {
			ans += zeronum[temp / 100];
			ans += hundred;
			temp = temp % 100;
			if (temp != 0) {
				ans += AND;

				if (temp >= 10) {

					if (temp < 20)
						ans += tennum[temp % 10];

					else 
						ans += tenmul[temp / 10] + zeronum[temp % 10];
					
				}
				else {
					ans += zeronum[temp % 10];
				}


			}
		}
		else if (temp >= 10) {

			if (temp < 20) {
				ans += tennum[temp % 10];
			}


			else
				ans += tenmul[temp / 10] + zeronum[temp % 10];


		}
		else
			ans += zeronum[temp % 10];


		cout << i << "       " << ans << endl;
	}




}




