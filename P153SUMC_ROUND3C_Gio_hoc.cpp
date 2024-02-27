#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll x, y, n;
	cin >> x >> y >> n;
	ll a[6];
	a[0] = x; a[1] = y; a[2] = y - x; 
	a[3] = -x; a[4] = -y; a[5] = -a[2];
	cout << a[ (n-1) % 6] ;
	return 0;
}
