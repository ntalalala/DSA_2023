#include<bits/stdc++.h>
using namespace std;
int ucln(int a, int b){
	if (b == 0 ) return a;
	return ucln(b, a % b);
}
int bcnn(int a, int b){
	return (a * b)/ucln(a,b);
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int a[4];
		for (int i = 0; i < 4; i++) cin >> a[i];
		int a1, a2, a3, a4, a5, a6;
		if (a[0] % a[2] == 0) a1 = a[0] / a[2];
		else a1 = a[0] / a[2] + 1;
		 a2 = a[1] / a[2];
		if (a[0] % a[3] == 0) a3 = a[0] / a[3];
		else a3 = a[0] / a[3] + 1;
		 a4 = a[1] / a[3];
		int b = bcnn(a[2], a[3]); 
		if (a[0] % b == 0) a5 = a[0] / b;
		else a5 = a[0] / b + 1;
		a6 = a[1] / b;
		cout << (a2 - a1 + 1) + (a4 - a3 + 1) - (a6 - a5 + 1) << endl;
	}
	return 0;
}
