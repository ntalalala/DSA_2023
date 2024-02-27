#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	while (n--){
		int k;
		cin >> k; 
		vector <long long> v;
		vector <long long> v2(k,-1);
		for (int i = 0; i < k; i++){
			long long tmp;
			cin >> tmp;
			v.push_back(tmp);
		}
		for (int i = 0; i < v.size(); i++){
			if ( 0 <= v[i] && v[i] < k) v2[v[i]] = v[i];
		}
		for (int i = 0; i < v2.size(); i++){
			cout << v2[i] << " "; 
		}
		cout << endl;
	}
	return 0;
}
