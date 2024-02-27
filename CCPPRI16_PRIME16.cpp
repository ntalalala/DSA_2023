#include<bits/stdc++.h>
using namespace std;
bool ngto(long long a){
	if ( a <= 3) return true;
	if ( a % 2 == 0 || a % 3 == 0) return false;
	if ( a == 5 || a == 7 ) return true;  
	for ( int i = 5; i * i <= a; i += 6)
	if ( a % i == 0 || a % (i+2) == 0) return false;
	return true;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		long long a;
		cin >> a;
		int dem = 0;
		for (int i = 2; i <= sqrt(a); i++){
			if (ngto(i)) dem++;
		}
		cout << dem << endl;
	}
	return 0;
} 
