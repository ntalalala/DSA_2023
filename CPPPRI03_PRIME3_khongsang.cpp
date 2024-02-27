#include<bits/stdc++.h>
using namespace std;
bool sangngto(int a){
	int can = sqrt(a);
	for ( int i = 2; i <= can; i++){
		if ( a % i == 0) return false;
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int a; cin >> a;
		cout << "2 " ;
		for ( int i = 3; i <= a; i+=2){
			if (sangngto(i)) cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}
