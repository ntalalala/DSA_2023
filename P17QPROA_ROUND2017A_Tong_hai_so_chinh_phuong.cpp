#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
	int t;
	cin >> t;
	while (t--){
		ull a;
		cin >> a;
		ull b = sqrt(a);
		int dem = 0;
		for (int i = 0; i <= b; i++){
			ull c = sqrt(a - i * i);
			if ( c * c + i * i == a  && c >= i) {
				dem++;
			}
		}
		cout << dem << endl;
	}
	return 0;
}
