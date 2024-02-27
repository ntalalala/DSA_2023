#include<bits/stdc++.h>
using namespace std;
void ptngto(int a){
	for (int i = 2; i <= sqrt(a); i++){
		int dem = 0;
		while ( a % i == 0){
			a = a / i;
			dem ++; 
		}
		if (dem != 0) cout << i << " " << dem << " ";
	}
	if (a != 1) cout << a << " " << "1";
}
int main () {
	int t; cin >> t;
	while (t--){
		int a;
		cin >> a;
		ptngto(a);
		cout << endl;
	}
	return 0;
}
