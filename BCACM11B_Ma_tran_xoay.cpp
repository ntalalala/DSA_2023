#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	int a[100][100];
	while (t--){
		int n, x, y;
		cin >> n >> x >> y;
		int hang = n - 1, cot = n - 1, temp = 0 , k = 1;
		while ( k <= n*n){
			for (int i = temp; i <= cot; i++){
				a[temp][i] = k;
				k++; 
			}
			for (int i = temp + 1; i <= hang; i++){
				a[i][cot] = k;
				k++;
			}
			for (int i = cot - 1; i >= temp; i--){
				a[hang][i] = k;
				k++;
			}
			for (int i = hang - 1; i >= temp + 1; i--){
				a[i][temp]= k;
				k++;
			}
			temp++; hang-- ; cot-- ;
		}
		cout << a[x-1][y-1] << endl;
	}
	return 0;
}
