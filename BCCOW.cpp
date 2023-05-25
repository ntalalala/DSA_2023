#include<bits/stdc++.h>
using namespace std;
int n, x[20], a[20];
long long max1, result = 0;
void maxkq(){
	long long sum = 0;
	for (int i = 1; i <= n; i++){
		if (x[i] == 1) sum += a[i];
	}
	if (sum <= max1){
		result = result < sum ? sum : result;
	}
}
void Try(int i){
	for (int j = 0; j <= 1; j++){
		x[i] = j;
		if (i == n) maxkq();
		else Try(i + 1);
	}
}
int main(){
	cin >> max1 >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	Try(1);
	cout << result;
}
