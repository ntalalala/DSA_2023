#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull gcd(ull a, ull b){
	if (b == 0) return a;
	else return gcd(b , a % b);
}
ull lcm(ull n){
	ull result = 1;
	for (int i = 2; i <= n; i++){
		result = (result * i)/ gcd(result, i);
	}
	return result;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		ull n;
		cin >> n;
		cout << lcm(n) << endl;
	}
	return 0;
}
