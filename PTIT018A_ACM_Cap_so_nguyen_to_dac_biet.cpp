#include<bits/stdc++.h>
using namespace std;
bool a[1000010];
void snt(){
	a[0] = 1; a[1] = 1;
	for (int i = 2; i <= sqrt(1000010); i++){
		int tmp = i * i;
		while (tmp <= 1000010){
			a[tmp] = 1;
			tmp += i;
		}
	}
}
int main(){
	snt();
	int t;
	cin >> t;
	while (t--){
		int m, n;
		cin >> m >> n;
		int dem = 0;
		for (int i = m; i <= n - 6; i++){
			if (a[i] == 0 && a[i + 6] == 0) dem++;
		}
		cout << dem << endl;
	}
	return 0;
}
