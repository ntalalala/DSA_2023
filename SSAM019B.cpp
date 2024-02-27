#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		vector < long long > v;
		vector <long long > v2;
		for (int i = 0; i < n; i++){
			long long tmp;
			cin >> tmp;
			v.push_back(tmp);
			v2.push_back(tmp);
		}
		int dem = 0;
		reverse(v2.begin(), v2.end());
		for (int i = 0; i < v.size(); i++){
			if (i != v.end() - find(v2.begin(), v2.end(), v[i])) {
				cout << v[i] << endl;
				dem++;
				break;
			}
		}
		if (dem == 0) cout << "NO" << endl;
	}
	return 0;
}
