#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a = n / 7;
	int b = n % 7;
	if (b == 0) cout << a * 2 << " " << a * 2;
	else if ( b == 1 ) cout << a * 2 << " " << a * 2 + 1;
	else if (b == 6) cout << a * 2 + 1 << " " << a * 2 + 2;
	else cout << a * 2 << " " << a * 2 + 2;
	return 0;
}
