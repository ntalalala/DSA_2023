#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int min = a[k - 1];
	int res = 0;
	for (int i = 0; i < n; i++){
		if (a[i] >= min && a[i] > 0) res++;
	}
	cout << res;
	return 0;
}
