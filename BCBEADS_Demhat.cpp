#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++ ){
		cin >> a[i];
	}
	int dem = 0, i = 0;
	while (i < n-1){
		if (a[i] != a[i+1]) dem++;
		i++;
	}
	cout << dem;
	return 0;
}

