#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
	ull d1, d2, d3;
	cin >> d1 >> d2 >> d3;
	ull d[4];
	d[0] = d1 + d2 + d3;
	d[1] = d1*2 + d2*2;
	d[2] = d1*2 + d3*2;
	d[3] = d2*2 + d3*2;
	sort(d , d + 4);
	cout << d[0];
	return 0; 
}
