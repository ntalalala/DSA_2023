#include<bits/stdc++.h>
using namespace std;
int main(){
	while (true){
		long long a, b;
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		long long tich = 1;
		while (b--){
			tich = (tich * a) % 1000000007;
		}
		cout << tich << endl;
	}
	return 0;
}
