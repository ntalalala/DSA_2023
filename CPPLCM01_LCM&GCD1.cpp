#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
	if ( b == 0) return a;
	else return gcd( b, a % b );
}
int main(){
	int n;
	cin >> n;
	while (n--){
		long long a, b;
		cin >> a >> b;
		long long ucln = gcd(a,b);
		long long bcnn = (a*b)/ucln;
		cout << bcnn << " " << ucln << endl;
	}
	return 0;
}
