#include<bits/stdc++.h>
using namespace std;
int dem(int a, int b){
    int sum = 0;
    sum += b / a;
    if (b / a == 0) return sum;
	return sum + dem(a, b % a + 2 * (b / a));
}
int main(){
	vector <pair <string, int>> v;
	int t;
	cin >> t;
	for (int i = 0; i < t; i++){
		string s;
		cin >> s;
		int a, b;
		cin >> a >> b;
		v.push_back({s, dem(a, b)});
	}
	int sum = 0, max = 0;
	for (int i = 0; i < t; i++){
		sum += v[i].second;
		max = max < v[i].second ? v[i].second : max;
	}
	for (int i = 0; i < t; i++){
		if (max == v[i]. second) {
			cout << sum << endl;
			cout << v[i].first;
			return 0;
		}
	}
}
