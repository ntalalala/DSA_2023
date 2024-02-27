#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; 
	long long b;
	cin >> n >> b;
	vector < long long > v;
	while (n--){
		long long tmp;
		cin >> tmp; 
		v.push_back(tmp);
	}
	sort(v.begin(),v.end());
	int dem = 0;
	for (int i = 0; i < v.size(); i++){
		for (int j = i+1; j < v.size(); j++){
			if (v[i]+ v[j] == b) dem++;
			else if (v[i]+v[j] > b) break;
		}
	}
	cout << dem;
	return 0;
}
