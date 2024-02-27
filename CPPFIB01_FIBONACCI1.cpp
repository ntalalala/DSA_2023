#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		if (n == 1) cout << "1" << endl;
		else {
		long long fn = 0;
		long long f1 = 0, f2 = 1;
		for (int i = 2; i <= n; i++){
			fn = (f1 + f2) % 1000000007;
			f1 = f2 % 1000000007; 
			f2 = fn % 1000000007; 
		}
		cout << fn << endl;
	}
	}
	return 0;
}
