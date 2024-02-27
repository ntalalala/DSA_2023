#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(pair <ll, int> a, pair <ll, int> b){
	if (a.second == b.second) return a.first > b.first;
	return a.second < b.second;
}

int main(){
	int t;
	cin >>t;
	while (t--){
		int k;
		cin >> k;
		vector <pair <ll, int>> v;
		vector <ll> vtmp;
		for (int i = 0; i < k; i++){
			ll tmp;
			cin >> tmp;
			vtmp.push_back(tmp);
		}
		for (int i = 0; i < vtmp.size(); i++){
			int dem = 1;
			for (int j = i + 1; j < vtmp.size() ; j++){
				if (vtmp[i] == vtmp[j]) {
					dem++;
					vtmp.erase(vtmp.begin() + j);
					j--;
				}
			}
			v.push_back({vtmp[i], dem});
		}
		sort(v.begin(), v.end(), cmp);
		cout << v[v.size() - 1].first << endl;
	}
	return 0;
}
