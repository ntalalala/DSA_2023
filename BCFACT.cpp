#include<bits/stdc++.h>
using namespace std;
long long factor(int n){
	if (n == 1) return 1;
	return n * factor(n - 1);
}
int main(){
	while (true){
		int n;
		cin >> n;
		if (n == 0) break;
		cout << (long long) factor(n) << endl;
	}
}
