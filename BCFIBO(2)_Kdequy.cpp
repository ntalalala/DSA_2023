#include<bits/stdc++.h>
using namespace std;
const long long h =  1e9 + 7;
long long fibo(int n){
	if (n == 0 || n == 1) return n;
	long long a, a0 = 0, a1 = 1;
	int i = 2;
	while (i <= n){
		a = (a0 % h + a1 % h) % h;
		a0 = a1;
		a1 = a;
		i++;
	}
	return a;
	
}
int main(){
	long long n;
	cin >> n;
	cout << fibo(n);
}
