#include<bits/stdc++.h>
using namespace std;
int main(){
	long long x, y, n;
	cin >> x >> y >> n;
	long long a[6];
	a[0] = x; a[1] = y; a[2] = y - x;
	a[3] = -x; a[4] = -y; a[5] = -a[2];
	long long t = a[(n - 1) % 6] % 1000000007;
	if (t >= 0) cout << t;
	else cout << 1000000007 - abs(t);
	return 0;
}
