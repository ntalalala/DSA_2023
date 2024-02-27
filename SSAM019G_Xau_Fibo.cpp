#include<bits/stdc++.h>
using namespace std;
int main(){
	vector <string> v(93, "");
	v[1] = "A"; v[2] = "B";
	for (int i = 3; i <= 92; i++){
		v[i] = v[i-2] + v[i-1];
		cout << v[i] << endl;
	}
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		string g = v[n];
		cout << g[k-1] << endl;
	}
	return 0;
}
