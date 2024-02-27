#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int k;
		cin >> k;
		int a[k];
		for (int i = 0; i < k; i++){
			cin >> a[i];
		}
		for (int i = 0; i < k - 1; i++){
			if (a[i + 1] != 0 && a[i] == a[i+1]){
				a[i] = a[i] * 2;
				a[i + 1] = 0;
				i++;
			}
	 	}
	 	int t1 = 0;
		for (int i = 0; i < k; i++){
			if (a[i] != 0) cout << a[i] << " ";
			else t1 ++;
		}
		for (int i = 0; i < t1; i++) cout << "0" << " ";
		cout << endl;
	}
	return 0;
}
