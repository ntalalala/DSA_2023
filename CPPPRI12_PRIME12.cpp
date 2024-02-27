#include<bits/stdc++.h>
using namespace std;
int ngtothuk( int a, int k){
	vector <int> v;
	for (int i = 2; i <= sqrt(a); i++){
		while (a % i == 0) {
			v.push_back(i);
			a = a / i;
		}
	}
	if ( a > 1) v.push_back(a);
	if ( k > v.size()) return -1;
	else return v[k-1];
}
int main(){
	int t;
	cin >> t;
	while (t--) {
		int a, k;
		cin >> a >> k;
		cout << ngtothuk(a,k) << endl;
	}
	return 0;
}
