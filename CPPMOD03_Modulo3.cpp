#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
	int t;
	cin >> t;
	while(t--){
		ull n, k;
		cin >> n >> k;
		ull i = n/k;
		cout << (n * (n + 1))/ 2 - (i * (i * k + k))/2 << endl;
	}
	return 0;
}
