#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
	int n;
	cin >> n;
	vector <ull> v;
	for (int i = 0; i < n; i++){
		ull tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	ull tong = v[0], dem = 1;
	for (int i = 1; i < v.size(); i++ ){
		if (v[i] >= tong) {
			tong += v[i];
			dem++;
		}
	}
	cout << dem;
	return 0;
}
