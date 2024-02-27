#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n][n];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	if (n == 2) cout << a[0][1] / 2 << " " << a[0][1] / 2;
	else {
		vector <int> v;
		int a1 = (a[0][1] + a[0][2] - a[1][2]) / 2;
		v.push_back(a1);
		for (int j = 1; j < n; j++){
			v.push_back(a[0][j] - a1);
		}
		for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
	}
	return 0;
}
