#include<bits/stdc++.h>
using namespace std;
int demuocngto(int a){
	int dem = 0;
	for (int i = 2; i <= sqrt(a); i++){
		int dem2 = 0; 
		if ( a % i == 0){ 
			dem++;
			while  (a % i == 0) {
				dem2++;
				a = a/i;
			}
		}
		if (dem > 3 || dem2 > 1) return 0;
	}
	if (a != 1) dem++ ;
	if ( dem == 3) return 1;
	else return 0;
}
int main (){
	int t;
	cin >> t;
	while (t--){
		int a;
		cin >> a;
		cout << demuocngto(a) << endl;
	}
	return 0;
}
