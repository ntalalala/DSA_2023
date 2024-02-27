#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n, m, t;
	cin >> n >> m >> t;
	vector <long long> v;
	for (int i = 0; i < t; i++){
		long long tmp;
		cin >> tmp;
		v.push_back(tmp);
	} 
	long long tong = 0;
	for (int i = 0; i < t - 1; i++){
		long long tmp1 = abs(v[i] - v[i+1]) - m + 1;
		if (tmp1 > 0) tong += tmp1;
	}
	cout << tong;
	return 0;
}
