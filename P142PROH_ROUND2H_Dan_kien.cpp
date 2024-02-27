#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	char s[11][11];
	bool cot[11], hang[11];
	for (int i = 1; i <= a; i++){
		for (int j = 1; j <= b; j++){
			cin >> s[i][j];
			if (s[i][j] == 'S') {
				cot[j] = 1;
				hang[i] = 1;
			}
		}
	}
	int check[11][11];
	memset(check, 0, sizeof(check));
	int dem = 0;
	for (int i = 1; i <= a; i++) {
		if (hang[i] == 0) {
			for (int j = 1; j <= b; j++) check[i][j] = 1;
		}
	}
	for (int i = 1; i <= b; i++){
		if (cot[i] == 0){
			for (int j = 1; j <= a; j++) check[j][i] = 1;
		}
	}
	for (int i = 1; i <= a; i++){
		for (int j = 1; j <= b; j++){
			if (check[i][j] == 1) dem++;
		}
	}
	cout << dem;
	return 0;
}
