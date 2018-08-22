/*#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

typedef struct factor{
	long long int index;
	int count;
	
	factor(int index, int count) {
		this->index = index;
		this->count = count;

	}
	

};

int main() {
	const long long int MAX = 1000000;	
	vector<factor> v;
	int ans=0;
	for (int i = MAX; i >1; i--) {
		long long int temp = i;
		factor f (i, 0);
		v.push_back(f);
		while (temp > 1) {
			temp = (temp % 2 == 0) ? temp /= 2 : temp= (temp* 3 + 1)/2;			
			v[v.size() - 1].count++;
			
				
		}
		if (ans < v[v.size() - 1].count) {
			ans = v[v.size() - 1].count;
			cout << v[v.size() - 1].index << "      " << ans << endl;
		}
	}
	
}
*/