#include<bits/stdc++.h>
using namespace std;

bool check (long long n, long long k){
	if (n >= k) return 0;
	else {
		long long a = ((n+1)*n) / 2;
		return a == k;
	}
}
int main(){
	int t;
	cin >> t;
	while (t--){
		long long n , k;
		cin >> n >> k;
		cout << check(n,k) << endl;
	}
	return 0;
}
