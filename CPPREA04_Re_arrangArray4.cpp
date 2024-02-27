#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		vector < int > v;
		int k; 
		cin >> k;
		for (int i = 0; i < k; i++){
			int tmp;
			cin >> tmp;
			v.push_back(tmp);
		}
		sort(v.begin(), v.end());
		if ( k % 2 == 0){
			for (int i = 0; i < k / 2; i++){
			cout << v[i] << " " << v[i + k / 2] << " ";
		}
		}
		else {
			for (int i = 0; i <=  k / 2; i++){
			int j = i + k / 2 + 1;
			cout << v[i] << " " ;
			if ( j < k) cout << v[j] << " ";
		}
		}
		cout << endl;
	}
	return 0;
}
