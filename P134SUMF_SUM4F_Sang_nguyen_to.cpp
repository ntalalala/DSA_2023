#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	vector < int > v;
	for (int i = 2; i <= n / 2; i++){
		cout << i << " ";
		v.push_back(i);
		int tmp = i * i; 
		while (tmp <= n){
			v.push_back(tmp); cout << tmp << " ";
			tmp += i;
	}
}
	cout << v[k - 1];
	return 0;
}
