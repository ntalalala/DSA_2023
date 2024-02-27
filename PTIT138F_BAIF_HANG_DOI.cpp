#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int a, b;
		cin >> a >> b;
		vector <string> v, v2;
		for (int i = 0; i < a; i++){
			string s;
			cin >> s;
			v.push_back(s);
			v2.push_back(s);
		}
		int a1[b], a2[b];
		for (int i = 0; i < b; i++){
			cin >> a1[i] >> a2[i];
		}
		for (int i = 0; i < b; i++){
			v2[a2[i] - 1] = v[a1[i] - 1];
			
		}
		for (int i = 0; i < v2.size(); i++) cout << v2[i] << " ";
		cout << endl;
	}
	return 0;
}
