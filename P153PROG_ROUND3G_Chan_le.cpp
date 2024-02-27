#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n, k;
	cin >> n >> k;
	long long dem;
	if (n % 2 == 0) dem = n / 2;
	else dem = n / 2 + 1;
	if ( k <= dem) {
		cout << 1 + 2 * (k - 1);
	} 
		else cout << 2 + 2 * (k - dem - 1);
	return 0;
}
