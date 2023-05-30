#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	vector <string> v1;
	vector <int> v2;
	vector <bool> v;
	while (cin >> s){
		if (s == ".") break;
		string k = s.substr(0, s.length() - 1); 
		if (('0' <= k[0] && k[0] <= '9') || k[0] == '-'){
			int x = stod(k);
			v2.push_back(x);
			v.push_back(1);
		}
		else {
			v1.push_back(k);
			v.push_back(0);
		}
		if (s[s.length() - 1] == '.'){
			sort(v1.begin(), v1.end());
			sort(v2.begin(), v2.end());
			int i1 = 0, i2 = 0;
			for (int i = 0; i < v.size(); i++){
				if (v[i] == 0){
					cout << v1[i1];
					i1++;
				}
				else{
					cout << v2[i2];
					i2++;
				}
				if (i != v.size() - 1)cout << ", ";
				else cout << ".\n";
			}
			v1.clear(); v2.clear(); v.clear();
		}
	}
}
