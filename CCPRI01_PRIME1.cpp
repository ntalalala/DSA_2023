#include<bits/stdc++.h>
using namespace std;
void uocngto(long long a){
	for (int i = 2; i <= sqrt(a); i++){
			while ( a % i == 0){
				cout << i << " ";
				a =  a / i;
			}
		}
		if ( a != 1 ) cout << a;
		cout << endl;
	}
int main(){
	int n;
	cin >> n;
	while (n--){
		long long a;
		cin >> a;
		uocngto(a);
	}
	return 0;
}
