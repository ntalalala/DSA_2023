#include<bits/stdc++.h>
using namespace std;

long long uoc(long long x){
	long long dem=0;
	if ( x == 2 ) return 1;
	else if (x % 2 != 0 || x == 0) return 0;
	for (int i = 1; i*i <= x; i++){
		if (x % i == 0){
			long long z =  x / i;
			if ( i % 2 == 0) dem++;
			if (z != i && z % 2 == 0 ) dem++;
		}
	}
	return dem;
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


