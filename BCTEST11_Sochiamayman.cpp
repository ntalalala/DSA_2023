#include<bits/stdc++.h>
using namespace std;
bool lucky ( int n ){
	if ( n % 7 == 0 || n % 4 == 0) return 1;
	else {
		stringstream ss;
		ss << n ; 
		string a = ss.str();
		for (int i = 0; i < a.length(); i++){
			if (a[i] != '4' && a[i] != '7' ) return 0;
		}
		return 1;
	}
}
int main (){
	int n;
	cin >> n;
	if (lucky(n)) cout << "YES";
	else cout << "NO";
	return 0;
}
