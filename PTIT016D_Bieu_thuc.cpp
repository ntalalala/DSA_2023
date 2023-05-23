#include<bits/stdc++.h>
using namespace std;
long long a[100000];
int main(){
	long long n, k;
	cin >> n >> k;
	for (long long i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a+1, a + n, greater<long long>());
	long long sum = 0;
	for (long long i = 0; i <= k; i++){
		sum += a[i];
	} 
	for (long long i = k + 1; i < n; i++){
		sum -= a[i];
	}
	cout << sum;
	return 0;
}
