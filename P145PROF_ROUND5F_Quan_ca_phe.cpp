#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[24][60];
	for (int i = 0; i < 24; i++){
		for (int j = 0; j < 60; j++){
			a[i][j] = 0;
		}
	}
	int max = 0;
	for (int i = 0; i < n; i++){
		int tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		a[tmp1][tmp2] ++;
		max = max < a[tmp1][tmp2] ? a[tmp1][tmp2] : max;
	}
	cout << max;
	return 0;
}
