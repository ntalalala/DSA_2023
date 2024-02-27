#include<bits/stdc++.h>
using namespace std;
bool ngto(int a){
	for (int i = 2; i <= sqrt(a); i++){
		if (a % i == 0) return false;
	}
	return a > 1;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int k; cin >> k;
		for (int i = 2; i <= k/2; i++){
			if ( ngto(i) && ngto(k-i)) {
				cout << i << " " << k - i << endl;
				break;
			} 
		}
	}
	return 0;
}
