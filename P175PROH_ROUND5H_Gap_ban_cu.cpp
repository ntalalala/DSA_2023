#include<bits/stdc++.h>
using namespace std;
int main(){
	long long l1, r1, l2, r2, k;
	cin >> l1 >> r1 >> l2 >> r2 >> k;
	long long min = l1 < l2 ? l2 : l1;
	long long max = r1 > r2 ? r2 : r1;
	if ( r1 < l2 || r2 < l1) cout << "0";
	else {
		long long res = max - min + 1;
		if (min <= k && k <= max) res--;
		cout << res;
	}
	return 0;
}
