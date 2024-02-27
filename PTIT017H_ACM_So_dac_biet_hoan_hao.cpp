#include<bits/stdc++.h>
using namespace std;
int demuoc(long long a){
	int dem = 0;
	for (int i = 1; i < sqrt(a); i++){
		if (a % i == 0) {
			dem += i + a/i;
		}
	}
	int k = sqrt(a);
	if ( k * k == a) dem += k;
	return dem;
}
bool ngto(int a){
	for (int i = 2; i <= sqrt(a); i++){
		if ( a % i == 0) return false;
	}
	return a > 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long a;
		cin >> a;
		int dem = demuoc(a);
		if (ngto(dem)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
