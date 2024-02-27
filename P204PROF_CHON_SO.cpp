#include<bits/stdc++.h>
using namespace std;
long long uocngto(long long n){
	if (n < 3) return n;
	long long tich = 1;
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0){
			tich *= i;
			while( n % i == 0){
				n = n / i;
			}
		}
 	}
	if (n != 1) tich *= n;
	return tich;
}

int main(){
	long long n;
	cin >> n;
	cout << uocngto(n);
}
