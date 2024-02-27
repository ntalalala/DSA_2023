#include<bits/stdc++.h>
using namespace std;
int main(){
	unsigned long long a, b, v;
	cin >> a >> b >> v;
	unsigned long long k = (v-b)/(a-b);
	if ( (v-b) % (a-b) == 0) cout << k;
	else cout << k+1;
	return 0;
}
