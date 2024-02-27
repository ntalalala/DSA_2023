#include<bits/stdc++.h>
using namespace std;
int main(){
	while (true){
		int n;
		cin >> n;
		if (n == 0) break;
		int a[51];
		for (int i = 1; i <= 49; i++) a[i] = 0;
		int k = 6 * n;
		for (int i = 1; i <= k; i++){
			int tmp;
			cin >> tmp;
			a[tmp]++;
		}
		int check = 0;
		for (int i = 1; i <= 49; i++){
			if (a[i] == 0) {
				check = 1;
				cout << "No" << endl;
				break;
			}
		}
		if (check == 0) cout << "Yes" << endl;
		}
	return 0;
}
