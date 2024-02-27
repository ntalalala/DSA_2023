#include<bits/stdc++.h>
using namespace std;
bool ngto(int a){
	for (int i = 2; i <= sqrt(a); i++){
		if (a % i == 0) return false;
	}
	return (a > 1);
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int m, n;
		cin >> m >> n;
		for (int i = m; i <= n; i++){
			if (ngto(i)) cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}
