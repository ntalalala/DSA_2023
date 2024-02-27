#include<bits/stdc++.h>
using namespace std;
bool cmp (pair < int, int> a, pair < int, int> b){
	return a.first < b.first;
}
int main(){
	int s, n;
	cin >> s >> n;
	vector < pair < int, int> > v; 
	for (int i = 0; i < n; i++){
		int a, b;
		cin >> a >> b;
		v.push_back({a, b});
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < n; i++){
		if (s <= v[i].first) {
			cout << "NO";
			return 0;
		}
		s += v[i].second;
	}
	cout << "YES";
	return 0;
}
