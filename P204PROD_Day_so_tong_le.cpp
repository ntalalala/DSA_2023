#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int a;
		cin >> a;
		int b[a];
		int le = 0;
		bool cle = 0, cchan = 0;
		for (int i = 0; i < a; i++) cin >> b[i]; 
		for (int i = 0; i < a; i++){
			if (b[i] % 2 == 0) cchan = 1;
			else {
				cle = 1;
				le++;
			}
		}
		if (cle && cchan) cout << "YES" << endl;
		else if (le % 2 != 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
