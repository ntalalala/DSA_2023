#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		long long a, dem = 0;
		cin >> a;
		int du = 0, k = 1, tmp = 0;
		while (a > 10){
			tmp = a % 10 + du;
			if (tmp >= 5) {
				du = 1;
			}
			else du = 0;
			dem++;
			a = a/ 10;
		}
		long long res = (a + du) * pow(10, dem);
		cout << res << endl;
	}
	return 0;
}

