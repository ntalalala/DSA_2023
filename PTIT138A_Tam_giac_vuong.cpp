#include<bits/stdc++.h>
using namespace std;
int main(){
	while ( 1 > 0){
		long long a , b, c ;
		cin >> a >> b >> c ;
		if (a == 0 && b == 0 && c == 0) break;
		if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) cout << "wrong" << endl;
		else if ( a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b  ) cout << "right" << endl;
		else cout << "wrong" << endl;
		}
	return 0;
}
