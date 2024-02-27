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
		sort(v.begin(), v.end(), greater < int > ());
		for (int i = 0; i < k / 2; i++){
			cout << v[i] << " " << v[ k - i - 1] << " ";
		}
		if ( k % 2 != 0) cout << v[k / 2];
		cout << endl;
	}
	return 0;
}
