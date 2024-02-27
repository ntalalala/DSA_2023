#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	long long k[a][b];
	long long sum = 0;
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			cin >> k[i][j];
			sum += k[i][j];
		}
	}
	sum += k[0][0] + k[0][b-1] + k[a-1][0] + k[a-1][b-1] + a*b;
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			if ( i > 0){
				sum += abs(k[i][j] - k[i-1][j]);
			}
			if (j > 0) {
				sum += abs(k[i][j]- k[i][j-1]);
			}
		}
	}
	cout << sum;
	return 0;
}
