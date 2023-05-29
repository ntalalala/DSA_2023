#include<bits/stdc++.h>
using namespace std;
const long long h = 1000000007;
long long mu(long long a, long long b){
	if (b == 0) return 1; 
	long long t = mu(a, b / 2) % h;
	if (b % 2 == 0) return (t * t) % h;
	else return a * ((t * t) % h) % h;
}
int main(){
	while (true){
		long long a, b;
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		cout << mu(a, b) << endl;
	}
}
