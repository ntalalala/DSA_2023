#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	vector <int> v1, v2;
	for (int i = 0; i < t; i++){
		int tmp1;
		cin >> tmp1;
		v1.push_back(tmp1);
	}
	for (int i = 0; i < t; i++){
		int tmp2;
		cin >> tmp2;
		v2.push_back(tmp2);
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	int res = 0;
	int z = 0;
	for (int i = 0; i < v2.size(); i++){
		if (v2[i] > v1[z]){
			z++;
			res++;
		}
	}
	cout << res;
	return 0;
}
