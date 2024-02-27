#include<bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;

bool nto(ull n){
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0) return false;
	}
	return n > 1;
}
bool shh(ull a){
	for (int p = 2; p <= 32; p++){
		if (nto(p)) {
			ull tmp = (ull)pow(2, p) - 1;
			if (nto(tmp)){
				ull hh = pow(2, p - 1) * tmp;
				if (hh == a) return true;
			}
		}
	}
	return false;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		ull a;
		cin >> a;
		cout << shh(a) << endl;
	}
	return 0;
}
