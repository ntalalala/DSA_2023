#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	while (n--){
		int k;
		cin >> k;
		int a[k];
		for (int i = 0; i < k; i++){
			cin >> a[i];
		}
		sort(a, a+k);
		cout << (a[k-1] - a[0]) * 2 << endl;
	}
	return 0;
}
