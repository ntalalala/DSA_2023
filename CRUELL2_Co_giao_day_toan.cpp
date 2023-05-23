#include<bits/stdc++.h>
using namespace std;
double value_at_x(double a[], int t, double x){
	double val = 0;
	for (int i = 0; i <= t; i++){
		val += a[i] * pow(x, i);
	}
	return val;
}
int result(int t, double a[]){
	double left = -1e6, right = 1e6, p = 0.0005;
	while (right - left > p){
		double mid = (right + left) / 2;
		double val1 = value_at_x(a, t, mid);
		if (val1 == 0) return (int)mid*1000;
		if (val1 < 0) left = mid;
		else right = mid;
	}
	return (int)(right * 1000);
}
int main(){
	int t;
	cin >> t;
	double a[t + 2];
	for (int i = 0; i <= t; i++) cin >> a[i];
	cout << result(t, a);
	return 0;
}
