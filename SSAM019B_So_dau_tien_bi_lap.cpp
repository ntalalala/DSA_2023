#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		vector < long long > v;
		for (int i = 0; i < n; i++){
			long long tmp;
			cin >> tmp;
			v. push_back(tmp);
		}
		int dem = 0;
		for (int i = 0; i < n - 1; i++){
			for (int j = i + 1; j < n; j++){
				if (v[i] == v[j]) {
					cout << v[i] << endl;
					dem++;
					break;
				}
				if (dem != 0) break;
			}
		}
		if (dem == 0) cout << "NO" << endl;;
		}
		return 0;
	}
			
