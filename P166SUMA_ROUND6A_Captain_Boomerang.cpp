#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	int a[5003] = {0};
	int tmp;
	for (int i = 0; i < t; i++) {
		cin >> tmp;
		a[tmp] = 1;
	}
	int dem = 0;
	for (int i = 1; i <= t; i++){
		if (a[i] == 0) dem++;
	}
	cout << dem;
	return 0;
}
