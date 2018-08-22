/*#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;





int main() {
	long long int route[21][21];
	memset(route, 0, sizeof(route));

	for (int i = 0; i < 21; i++) {
		if (i == 0) continue;
		route[i][0] = 1;
		route[0][i] = 1;
	}

	for (int i = 1; i < 21; i++) {

		for (int j = 1; j < 21; j++) {

			route[i][j] = route[i - 1][j] + route[i][j - 1];

			cout << i << "     " << j << "     " << route[i][j] << endl;

		}
	}

}
*/