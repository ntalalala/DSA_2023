#include<bits/stdc++.h>
using namespace std;
//Dem so lan so nguyen to  luu vao v

long long uoc(long long x){
	vector <long long> v;
	if ( x % 2 != 0 || x == 0) return 0;
	for (int i = 2; i * i <= x; i++){
		long long dem = 0;
		while (x % i == 0){
			x = x/i;
			dem++;
		}
		if (dem != 0) v.push_back(dem);
	}
	if ( x != 1) v.push_back(1);
	int m = 0, n = 1;
	for (int i = 1; i < v.size(); i++){
		m += v[i];
		n *= v[i];
	}
	if (v.size() != 1) return v[0] + v[0] * ( m + n );
	else return v[0];
	}

int main(){
	int n; cin >> n;
	while (n--){
		long long a;
		cin >> a;
		cout << uoc(a) << endl;
	}
	return 0;
}


