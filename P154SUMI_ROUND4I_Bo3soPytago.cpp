#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; 
	int dem = 0;
	cin >> n;
	for (int i = 2; i <= n; i++ ){
		for (int j = i; j <= n; j++){
			int so = sqrt(i*i + j*j);
			if (so*so == i*i + j*j && so <= n) dem++;
		}
	}
	cout << dem;
	return 0;
}
