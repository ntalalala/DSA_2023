#include<bits/stdc++.h>
using namespace std;
int n, k, x[100];
void inkq(){
	for (int i = 1; i <= k; i++){
		cout << x[i];
	}
	cout << endl;
}
void Try(int i){
	for (int j = x[i - 1] + 1; j <= n - k + i; j++){
			x[i] = j;
			if (i == k) inkq();
			else Try(i+1);
		}
	}

int main(){
	int t;
	cin >> t;
	while (t--){
		cin >> n >> k;
		x[0] = 0;
		Try(1);
	}
}
