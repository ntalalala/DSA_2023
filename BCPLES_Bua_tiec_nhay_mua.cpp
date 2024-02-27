#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	vector<int> v1;
	vector<int> v2;
	while (t--){
		int a;
		cin >> a;
		v1.push_back(a);
	}
	while (t--){
		int b;
		cin >> b;
		v2.push_back(b);
	}
	long long tong;
	int dem = 0;
	for (int i = 0; i < t; i++){
		tong = v1[i] + v2[i];
		if (abs(tong) < abs(v1[i]) && abs(tong) < abs(v2[i]) && tong != 0) {
			dem++;
		}  
	}
	cout << dem;
	return 0;
}
