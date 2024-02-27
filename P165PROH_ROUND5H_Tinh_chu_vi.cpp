#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		long long a, b, c;
		cin >> a >> b >> c;
		long long c1 = sqrt(a*b*c) / b;
		long long c2 = sqrt(a*b*c) / c;
		long long c3 = sqrt(a*b*c) / a;
		cout << 4*(c1 + c2 + c3) << endl;
	}
	
	return 0;
}
