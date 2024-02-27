#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull xoaso(ull a){
	vector < ull > v;
	while (a > 0){
		int k = a% 10;
		if (k != 0) v.push_back(k);
		a = a / 10;
	}
	ull tong = 0;
	for (int i = v.size() - 1; i >= 0; i--){
		tong = tong * 10 + v[i];
	}
	return tong;
}
int main(){
	ull a, b;
	cin >> a >> b;
	ull tong = a + b;
	if (xoaso(a) + xoaso(b) == xoaso(tong)) cout << "YES";
	else cout << "NO";
	
	
}
