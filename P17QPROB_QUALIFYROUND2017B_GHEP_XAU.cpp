#include<bits/stdc++.h>
using namespace std;
bool cmp(string s1, string s2){
	if (s1 + s2 < s2 + s1) return 1;
	return 0;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int a;
		cin >> a;
		vector <string> v;
		for (int i = 0; i < a; i++){
			string s;
			cin >> s;
			v.push_back(s);
		}
		sort(v.begin(), v.end(), cmp);
		string str = "";
		for (int i = 0; i < v.size(); i++){
			str += v[i];
		}
		cout << str << endl;
	}
	return 0;
}
