#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n, m, a;
	cin >> n >> m >> a;
	long long dai = 0, rong = 0;
	if (n % a == 0) rong = n / a;
	else rong = n / a + 1;
	if (m % a == 0) dai = m / a;
	else dai = m / a + 1;
	unsigned long long tich = dai * rong;
	cout << tich;
	return 0;
}
