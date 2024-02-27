#include<bits/stdc++.h>
using namespace std;
bool cmp(pair< int, int> a, pair<int, int> b){
	return a.first < b.first;
}
int main(){
	int s, b;
	cin >> s >> b;
	int a[s];
	for (int i = 0; i < s; i++) cin >> a[i];
	vector <pair <int, int> > v;
	for (int i = 0; i < b; i++){
		int tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		v.push_back({tmp1, tmp2});
	}
	sort (v.begin(), v.end(), cmp);
	for (int i = 0; i < s; i++){
		int left = 0, right = b - 1, pos = -1;
		while (left <= right){
			int mid = (left + right) / 2;
			if (v[mid].first <= a[i]){
				pos = mid;
				left = mid + 1;
			}
			else right = mid - 1;
	}
	long long tong = 0;
	for (int i = 0; i <= pos; i++) tong += v[i].second;
	cout << tong << " ";
	}
	return 0;
}
