#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	int k = t;
	int dem = 0;
	while (t--){
		int a,b,c;
		cin >> a >> b >> c;
		if ( a + b + c <= 1) dem++;
	}
	cout << k - dem;
	return 0;
}
