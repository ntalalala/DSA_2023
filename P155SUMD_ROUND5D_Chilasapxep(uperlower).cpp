#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	int a[n];
	for (int &x : a) cin >> x;
	sort(a, a + n);
	while(m--){
		int tmp;
		cin >> tmp;
		auto it = upper_bound(a, a + n, tmp);
		cout << it - a << endl;
	}
	return 0;
}
