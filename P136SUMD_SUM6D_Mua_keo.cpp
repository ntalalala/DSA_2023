#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
	ull a, k;
	cin >> a >> k;
	ull m1 = pow(10 , k), m2 = pow(10, k-1);
	if (a % m1 >= 5 * m2 ) {
		ull n1 = a - (a % m1) + m1;
		cout << n1;
		return 0;
	}
	else {
		ull n2 = a - (a % m1);
		cout << n2;
		return 0;
	}
}
