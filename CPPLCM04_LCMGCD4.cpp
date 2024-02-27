#include<bits/stdc++.h>
using namespace std;
unsigned long long gcd ( unsigned long long a, unsigned long long b){
	if ( b == 0) return a;
	else return gcd(b, a % b );
}
int main(){
	int t;
	cin >> t;
	while (t--){
		unsigned long long a,b;
		cin >> a >> b;
		cout << gcd(a,b) << endl;
	}
	return 0;
}
