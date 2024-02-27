#include<bits/stdc++.h>
using namespace std;

int chiahet(int a, int b){
	int dem = 0;
	while (a % b == 0){
		a = a / b;
		dem ++;
	}
	return dem;
}
int main (){
	int t;
	cin >> t;
	while (t--){
		int a, p;
		cin >> a >> p;
		int count = 0;
		for ( int i = p; i <= a; i += p){
			count += chiahet(i,p);
		}
		cout << count << endl;
	}
	return 0;
}
