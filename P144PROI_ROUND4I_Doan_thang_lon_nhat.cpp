#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	vector < pair < long long, long long > > v;
	for (int i = 0; i < t; i++){
		long long a, b;
		cin >> a >> b;
		v.push_back({a,b});
	}
	long long min = v[0].first, max = v[0].second;
	for (int i = 0; i < t; i++){
		if (min > v[i].first) min = v[i].first;
		if (max < v[i].second) max = v[i].second;
	}
	int check = 0;
	for (int i = 0; i < t; i++){
		if (v[i].first == min && v[i].second == max ) {
			check = 1;
			cout << i + 1;
			break;
		}
	}
	if (check == 0) cout << "-1";
	return 0;
}
