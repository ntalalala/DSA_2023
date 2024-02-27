#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		long long a, m;
		cin >> a >> m;
		long long check = 0;
		for (int i = 1 ; i < m; i++){
			if ((a * i) % m == 1) {
				check = 1;
				cout << i << endl;
				break;
			}
		}
		if (check == 0) cout << "-1" << endl;
	}
	return 0;
}
