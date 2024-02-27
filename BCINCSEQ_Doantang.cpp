#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n]; int dem = 0;
	for (int i = 0; i < n; i++){
		cin >> a[i]; 
	}
	int right = 1; int left = 0;
	while ( right < n) {
		if ( a[right - 1] <= a[right] ) right ++;
		else {	
		dem = dem < (right - left ) ? (right - left ) : dem;
		left = right;
		right ++;
		}
	}
	dem = dem < (right - left ) ? (right - left ) : dem;
	cout << dem;
	return 0;
}
