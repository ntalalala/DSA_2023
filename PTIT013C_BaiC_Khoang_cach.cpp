#include<bits/stdc++.h>
using namespace std;
long long kc(long long xa, long long ya, long long xb, long long yb){
	long long k;
	if (xa == xb && ya == yb) {
		return abs(ya);
	}
	else {
		if ( ya * yb > 0) k = sqrt(pow( xa - xb, 2 ) + pow( ya + yb, 2 ));
		else k = sqrt(pow( xa - xb, 2 ) + pow( ya - yb, 2 ));
	}
	return k;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		long long xa, ya, xb, yb;
		cin >> xa >> ya >> xb >> yb;
		cout << kc(xa, ya, xb, yb) << endl;
	}
	return 0;
}
