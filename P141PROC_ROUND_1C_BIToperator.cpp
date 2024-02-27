#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	vector <string> v;
	for (int i = 0; i < t; i++){
		string k;
		cin >> k;
		v.push_back (k);
	}
	int demcong = 0, demtru = 0;
	for (int i = 0; i < v.size(); i++){
		if (v[i] == "++X" || v[i] == "X++" ) demcong ++;
		else if (v[i] == "--X" || v[i] == "X--" ) demtru ++;
	}
	cout << (demcong-demtru);
	return 0;
	}

