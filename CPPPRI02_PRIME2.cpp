#include<bits/stdc++.h>
using namespace std;
long long uocngtomax( long long a){
	int max = 0;
	for (int i = 2; i <= sqrt (a); i++){
		while ( a % i == 0 ){
			a = a / i;
			max = i;
		}
	}
	if ( a != 1) return a;
	else return max;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		long long a;
		cin >> a;
		cout << uocngtomax(a) << endl;
	}
	return 0;
}
