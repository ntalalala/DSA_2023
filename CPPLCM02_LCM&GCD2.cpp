#include<bits/stdc++.h>
using namespace std;
int lcm(int a , int b){
	int sum = a + b;
	a = a < b ? b : a;
	b = sum - a;
	while ( a % b != 0){
		a += a;
	}
	return a;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int a;
		cin >> a;
		int b = 1;
		for (int i = 1; i < a; i++){
			b = lcm(b,i+1);
		}
		cout << b << endl;
	}
	return 0;
}
