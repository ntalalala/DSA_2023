#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
	ull s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	vector <ull> v; 
	vector <ull> v2;
	v.push_back(s1);
	v.push_back(s2);
	v.push_back(s3);
	v.push_back(s4);
	sort(v.begin(), v.end());
	int dem = 0;
	for (int i = 0; i < v.size() - 1; i++ ){
		v2.push_back(v[i+1] - v[i]);
	}
	for (int i = 0; i < v2.size(); i++){
		if (v2[i] == 0) dem++;
	}
	cout << dem;
	return 0;
}

