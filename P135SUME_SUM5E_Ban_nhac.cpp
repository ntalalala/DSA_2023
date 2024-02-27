#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[8];
	for (int i = 0; i < 8; i++){
		cin >> a[i];
	}
	int hieu = a[1] - a[0];
	int check = 1;
	for (int i = 1; i < 7; i++){
		if ( a[i + 1] - a[i] != hieu){
			check = 0;
			cout << "mixed";
			break;
		}
	}
	if (check == 1) {
		if (hieu == 1) cout << "ascending";
		else cout << "descending";
	}
	return 0;
}
