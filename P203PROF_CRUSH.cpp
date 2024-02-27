#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, min;
	cin >> n;
	cin >> min;
	long long sum = min;
	for (int i = 1; i < n; i++){
		int a;
		cin >> a;
		sum += a;
		if (a <= min && a % 2 == 1) min = a;
	}
		if (min % 2 == 0) {
			cout << "0";
			return 0;
		}
		else if (sum % 2 == 0) {
			cout << sum - min << endl;
		}
		else cout << sum << endl;
	return 0;
}
