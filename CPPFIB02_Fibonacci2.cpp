#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull fibo(ull n){
	if (a == 1) return 1;
	else {
		while (a <= n) return n + fibo(n-1); 
	}

}
int main(){
	int t;
	cin >> t;
	while (t--){
		ull a;
		cin >> a;
		if (a == fibo(a)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
