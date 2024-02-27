#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	long long a[t], b[t];
	for (int i = 0; i < t; i++){
		cin >> a[i];
	}
	b[0] = a[0]; 
	long long sum = b[0];
	for (int i = 1; i < t; i++){
		b[i] = (i+1)*a[i] - sum;
		sum += b[i];
	}
	for (int i = 0; i < t; i++){
		cout << b[i] << " ";
	}
	return 0;
}
