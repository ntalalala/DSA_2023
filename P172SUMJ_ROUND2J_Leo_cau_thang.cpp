#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n, m;
	cin >> n >> m;
	long long check, dem = 0;
	if (n % m == 0) check = n / m;
	else check = n / m + 1;
	int i = 1;
	while ( i <= check){
		if ( m * i <= n && n <= 2 * m * i) {
			dem = 1;
			cout << m * i;
			break;
		}
		i++;
	}
	if (dem == 0) cout << "-1";
	return 0;
}
