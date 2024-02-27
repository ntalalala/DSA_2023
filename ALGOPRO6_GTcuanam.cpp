#include<bits/stdc++.h>
using namespace std;
int main(){
	int s;
	cin >> s;
	int a=s;
	int dem=0;
	while (s > 0) {
		dem+= s % 10;
		s=s/10;
	}
	if (a%4==0 && a!= 1900 && a!= 2100) cout << dem * 366 + 3597;
	else cout << dem*365 + 3584;
	return 0;
}
