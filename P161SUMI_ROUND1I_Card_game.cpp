#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int a[26];
	memset(a, 0, sizeof(a));
	for (int i = 0; i < n; i++){
		a[s[i] - 'A'] ++;
	}
	sort(a, a + 25, greater<int>());
	int j = 0;
	long long tong = 0;
	while(k > 0){
		if (k >= a[j]){
			tong += (long long)pow(a[j], 2);
			k -= a[j];
			j++;
		}
		else {
			tong += (long long)pow(k, 2);
			break;
		}
	}
	cout << tong;
	return 0;
}
