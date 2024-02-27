#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, c;
	cin >> n >> c;
	int a[n + 1];
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	int t;
	cin >> t;
	while (t--){
		int m, m1;
		cin >> m >> m1;
		int tmp[n + 1];
		for (int i = m; i <= m1; i++) tmp[i] = a[i];
		int tong, max = (m1 - m + 1) / 2, check, flag = 1;
		for (int i = m; i <= m1 && flag == 1; i++){
			tong = 1;
			for (int j = i + 1; j <= n; j++){
				if (tmp[i] != 0 && tmp[i] == tmp[j]){
					tmp[j] = 0;
					tong ++;
				}
			}
			if (tong > max){
				flag = 0;
				check = tmp[i];
				break;
			}
		}
		if (flag != 0) cout << "no" << endl;
		else cout << "yes" << " " << check << endl;
	}
	return 0;
}
