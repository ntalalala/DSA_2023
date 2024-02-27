#include<bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while (t--){
		double a, b, c;
		cin >> a >> b >> c;
		double m = 1 + b/100;
		double k = c / a;
		cout << ceil( log(k) / log(m) ) << endl;
	}
	return 0;
}
