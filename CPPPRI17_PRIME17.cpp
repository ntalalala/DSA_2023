#include<bits/stdc++.h>
using namespace std;
bool a[1000000];
void snt(){
	a[0] = 1; a[1] = 1;
	for (int i = 2; i <= sqrt(1000000); i++){
		int tmp = i * i;
		while (tmp <= 1000000){
			a[tmp] = 1;
			tmp += i;
		}
	}
}
int main(){
	int t;
	cin >> t;
	snt();
	while (t--){
		long long l, r, c, d;
		cin >> l >> r;
		c = sqrt(l);
		d = sqrt(r);
		int dem = 0;
		for (int i = c; i <= d; i++){
			if (a[i] == 0) dem ++;
		}
		cout << dem << endl;
	}
	return 0;
}
