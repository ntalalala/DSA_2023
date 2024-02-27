#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	long long s;
	cin >> n >> s;
	vector <long long> v;
	for (int i = 0; i < n; i++){
		long long tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end(), greater <long long> ());
	int dem = 0;
	for ( int i = 0; i < n; i++){
		dem += s / v[i];
		s = s % v[i];
	}
	if (s != 0) cout << "-1";
	else cout << dem;
	return 0;
}

