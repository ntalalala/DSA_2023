#include<bits/stdc++.h>
using namespace std;
int ucln(int a, int b){
	if (b == 0) return a;
	else return ucln(b, a % b);
}
int main(){
	int n, m;
	cin >> n >> m;
	int a1[n+1], a2[m+1];
	for (int i = 0; i <= n; i++){
		cin >> a1[i];
	}
	for (int i = 0; i <= m; i++){
		cin >> a2[i];
	}
	if (n > m) {
		if (a1[0] * a2[0] < 0) {
			cout << "-Infinity";
			return 0;
		}
		else {
			cout << "Infinity";
			return 0;
		}
	}
	else if (n < m) {
		cout << "0/1";
		return 0;
	}
	else {
		int k = ucln(abs(a1[0]), abs(a2[0]));
		if (a1[0] * a2[0] < 0) {
			cout << "-" << abs(a1[0]) / k << "/" << abs(a2[0]) / k;
			return 0;
		}
		else cout << abs(a1[0]) / k << "/" << abs(a2[0]) / k;
	}
	return 0;
}
