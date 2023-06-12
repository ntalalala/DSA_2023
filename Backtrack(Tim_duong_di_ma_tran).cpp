#include<bits/stdc++.h>
using namespace std;
int m, n, a[22][22], x[50];
void kt(){
	bool check = true;
	int right = 1, down = 1;
	for (int i = 1; i <= m + n - 2; i++){
		if (x[i] == 1) right++;
		else down++;
		if (a[down][right] == 0 || right > n || down > m){
			check = false;
			break;
		}
	}
	if (check){
		for (int i = 1; i <= m + n - 2; i++){
			if (x[i] == 1) cout << "R";
			else cout << "D";
		}
		cout << endl;
	}
}
void Try(int i){
	for (int j = 0; j <= 1; j++){
		x[i] = j;
		if (i == m + n - 2) kt();
		else Try(i + 1);
	}
}
int main(){
	cin >> m >> n;
	for (int i = 1; i <= m; i++){
		for (int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	Try(1);
}
