#include<bits/stdc++.h>
using namespace std;

bool cmp(string a, string b){
	if (a.length() == b.length()) return a < b;
	return a.length() < b.length();
}

int main(){
	int times = 1;
	while(true){
		int t;
		cin >> t;
		if (t == 0) break;
		vector <string> v;
		for (int i = 0; i < t; i++){
			string s;
			cin >> s;
			while (s[0] == '0') s.erase(0, 1);
			v.push_back(s);
		}
		sort(v.begin(), v.end(), cmp);
		if (v[0] == v[v.size() - 1]){
			cout << "Case " << times << ": " << "There is a row of trees having equal height." << endl; 
		}
		else cout << "Case " << times << ": " << v[0]<< " " << v[v.size() - 1] << endl;
		times++;
	}
	return 0;
}
