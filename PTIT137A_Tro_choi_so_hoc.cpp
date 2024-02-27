#include<bits/stdc++.h>
using namespace std;
long long sohoc(long long a, long long b, long long c, long long d, long long &dem){
	long long a1 = abs ( a - b);
	long long b1 = abs ( b - c); 
	long long c1 = abs ( c - d);
	long long d1 = abs ( d - a);
	dem++ ;
	if ( a1 != b1 || b1 != c1 || c1 != d1 || d1 != a1) return sohoc(a1,b1,c1,d1,dem);
}
int main(){
	while ( 1 > 0){
		long long a , b, c ,d ;
		cin >> a >> b >> c >> d;
		if (a == 0 && b == 0 && c == 0 && d == 0) break;
		if (a == b && b == c && c == d ) cout << "0" << endl;
		else {
			long long dem = 0;
			sohoc(a,b,c,d,dem);
			cout << dem << endl;
		}
	}
	return 0;
}
