#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull gcd(ull a, ull b){
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main(){
	int t;
	cin >> t;
	while (t--){
		ull a,x,y;
		cin >> a >> x >> y;
		ull k = gcd(x, y);
		for (long long i = 0; i < k; i++){
			cout << a;
		} 
			cout << endl;
	}
	return 0;
}
