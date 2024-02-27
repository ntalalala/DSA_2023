#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int dem = 0;
	for (int i = 0; i < n; i++){
		if (a[i]==25) dem++;
		else dem = dem - (a[i]-25)/25;
		if (dem < 0) { cout << "NO"; return 0;}
	}
	cout << "YES";
	return 0;
} 
