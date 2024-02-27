#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	vector <long long > v;
	long long tong = 0;
	for (int i = 0; i < a; i++){
		long long tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	int i = 0;
	while (b--){
		v[i] = - v[i];
		if (v[i] > v[i + 1]) i++;
	}
	for (int i = 0; i < a; i++) tong += v[i];
	cout << tong;
	return 0;
}
