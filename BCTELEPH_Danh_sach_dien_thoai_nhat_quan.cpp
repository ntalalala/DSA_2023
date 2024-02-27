#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
	return a.length() < b.length();
}
bool check(string k, string h){
	for (int i = 0; i < h.length(); i++){
		int a = k[i] - '0';
		int b = h[i] - '0';
		if (a != b) return false;
	}
	return true;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		vector <string> v;
		for (int i = 0; i < n; i++){
			string s;
			cin >> s;
			v.push_back(s);
		}
		sort(v.begin(), v.end(), cmp);
		vector <string> v1;
		v1.push_back (v[0]);
		bool flag = 1;
		for (int i = 1; i < n && flag ; i++){
			for (int j = 0; j < v1.size(); j++){
				cout << v[i] << " " << v1[j] << endl;
				if (check(v1[i], v1[j])) {
					cout << "NO" << endl;
					flag = 0;
					break;
				}
			} 
			if (flag) v1.push_back(v[i]);
		}
		if (flag) cout << "YES" << endl;
	}
	return 0;
}
