#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int k;
		cin >> k;
		vector <int> va, vb;
		for (int i = 0; i < k; i++){
			int tmp1; 
			cin >> tmp1;
			va.push_back(tmp1);
		}
		for (int i = 0; i < k; i++){
			int tmp2; 
			cin >> tmp2;
			vb.push_back(tmp2);
		}
		sort(va.begin(), va.end());
		sort(vb.begin(), vb.end());
		int check = 0;
		for (int i = 0; i < k; i++){
			if (va[i] > vb[i]) {
				check = 1;
				cout << "NO" << endl;
				break;
			}
		}
		if (check == 0) cout << "YES" << endl;
	}
	return 0;
}
