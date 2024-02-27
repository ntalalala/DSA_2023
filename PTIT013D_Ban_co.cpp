#include<bits/stdc++.h>
using namespace std;
int banco(int n){
	int k = (n * n)/2;
	if (n < 2) return n;
	else if (n == 2) return 4;
	else if (n % 2 == 0) return k;
	else return k+1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << banco(n) << endl;;
	}
	return 0;
}
