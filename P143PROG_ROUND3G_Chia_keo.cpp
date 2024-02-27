#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	if (k % (n - 1) != 0){
		int m = k / (n - 1);
		cout << m + k << " " << m + k;
		return 0;
	}
	else {
		int h = k / (n - 1);
		cout << h + k - 1 << " " << h + k ;
		return 0;
	}
}
