#include<bits/stdc++.h>
using namespace std;
long long pow2(long long a, long long b){
	if (b == 0) return 1;
	else if (b % 2 == 0){
		long long p = pow2(a, b/2);
		return (p * p) % 1000000007; 
	}
	else {
		long long p = pow2(a, b -1);
		return (p * a) % 1000000007;
	}
}
int main(){
	while (true){
		long long a, b;
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		cout << pow2(a, b) << endl;
	}
}
