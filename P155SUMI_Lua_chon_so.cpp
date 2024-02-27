#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	vector <int> v;
	for (int i = 0; i < m; i++){
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	int hieu = 100000;
	for (int i = 0; i <= m - n; i++){
		int tmp1 = v[n + i - 1] - v[i];
		hieu = hieu > tmp1 ? tmp1 : hieu; 
	}
	cout << hieu;
	return 0;
}
