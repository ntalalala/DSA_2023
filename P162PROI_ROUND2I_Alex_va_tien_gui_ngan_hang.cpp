#include<bits/stdc++.h>
using namespace std;
int main(){
	long long k;
	cin >> k;
	if ( k >= 0) cout << k;
	else {
		int h1 = abs(k % 10);
		int h2 = abs(k / 10) % 10;
		if (h1 >= h2) cout << k / 10;
		else cout << k + h2 * 10;
	}
	return 0;
}
