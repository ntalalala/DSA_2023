#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
	int t;
	cin >> t;
	while (t--){
		int k;
		cin >> k;
		vector < ull > v;
		map <ull, ull > so;
		for (int i = 0; i < k; i++){
			int tmp;
			cin >> tmp;
			v.push_back(tmp);
			so[tmp] = 0;
		}
		for (int i = 0; i < k; i++){
			so[v[i]]++;
		}
		int count = 1;
		for (int i = 0; i < k; i++){
			if (so[v[i]] > 1) {
				cout << v[i] << endl;
				count = 0;
				break;
			}
		}
		if (count == 1) cout << "NO" << endl;
	}
	return 0;
	
}
