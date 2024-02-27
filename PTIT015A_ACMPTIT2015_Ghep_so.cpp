#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		string a,b,c;
		cin >> a >> b >> c;
		string k = a + b + c;
		vector <int> v;
		for (int i = 0; i < k.length(); i++){
			v.push_back(k[i] - '0');
		}
		sort(v.begin(),v.end(), greater<int>());
		for (int i = 0; i < v.size(); i++){
			cout << v[i];
		}
		cout << endl;
	}
	return 0;
}
