#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a, b, c;
	cin >> a >> b >> c;
	if ( a == 0) {
		if (b == 0 && c!= 0) cout << "0";
		else if (b == 0 && c == 0) cout << "-1";
		else {
			cout << "1" << endl;
			cout << setprecision(5) << fixed << (-1.0*(double)c)/(double)b;
		} 
	}
	else {
		long long denta = b*b - 4*a*c;
		if (denta < 0) cout << "0";
		else if (denta == 0){
			cout << "1" << endl;
			cout << setprecision(5) << fixed << -1.0*(double)b/(2.0*(double)a);
		} 
		else {
			cout << "2" << endl;
			double m = (-1.0 * (double)b - sqrt(denta)) / (2.0 * a);
			double n = (-1.0 * (double)b + sqrt(denta)) / (2.0 * a);
			if ( m < n) {
				cout << setprecision(5) << fixed << m << endl;
				cout << setprecision(5) << fixed << n ;
			}
			else {
				cout << setprecision(5) << fixed << n << endl;
				cout << setprecision(5) << fixed << m ;
			}
		}
	}
	return 0;
}
