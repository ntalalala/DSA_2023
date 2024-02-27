#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[3002];
	for (int i = 1; i < 3001; i++) a[i] = 0;
	for (int i = 0; i < n; i++){
		int x;
		cin >> x;
		a[x]++;
		
	}
	for (int i = 1; i <= n; i++){
		if (a[i] == 0) {
			cout << i;
			return 0;
		}
	}
	cout << n + 1;
	return 0;
}

