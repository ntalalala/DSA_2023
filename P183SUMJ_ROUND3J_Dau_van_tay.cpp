#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	vector < int > v1;
	vector < int > v2;
	for (int i = 0; i < n; i++){
		int tmp;
		cin >> tmp;
		v1.push_back(tmp);
	}
	for (int i = 0; i < m; i++){
		int tmp1;
		cin >> tmp1;
		v2.push_back(tmp1);
	}
	vector < int > v3;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if ( v1[i] == v2[j]) v3.push_back(v1[i]);
		}
	}
	for (int i = 0; i < v3.size(); i++){
		cout << v3[i] << " ";
	}
}
