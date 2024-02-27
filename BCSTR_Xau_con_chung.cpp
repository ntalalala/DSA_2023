#include<bits/stdc++.h>
using namespace std;
int main(){
	string a, b;
	cin >> a >> b;
	bool s1[130], s2[130];
	int dem = 0;
	for (int i = 0; i < a.length(); i++) s1[a[i]] = 1;
	for (int i = 0; i < b.length(); i++) s2[b[i]] = 1;
	for (int i = 0; i < a.length(); i++){
		if (s2[a[i]] == 1) dem++;
	}
	cout << dem;
	return 0;
}
