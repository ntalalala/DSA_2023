#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m, j;
	cin >> n >> m >> j;
	vector <int> v;
	v.push_back(1);
	while (j--){
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	int dem = 0;
	for (int i = 0; i < v.size()-1; i++){
		dem += abs(v[i+1] - v[i]) - m + 1;
	}
	cout << dem;
	return 0;
}
