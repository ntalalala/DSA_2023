#include<bits/stdc++.h>
using namespace std;
int gao(int n){
	int t1 = n / 5;
	for (int i = t1; i >= 0; i--){
		int du = n - i * 5;
		if (du % 3 == 0) return i + du / 3;
	}
	return -1;
	
}
int main(){
	int n;
	cin >> n;
	cout << gao(n);
	return 0;
}
