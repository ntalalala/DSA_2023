#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
	int cot[30001], hang[30001], d1[60002], d2[60002];
	int n, g;
	cin >> n >> g;
	memset(cot, 0, sizeof(cot));
	memset(hang, 0, sizeof(hang));
	memset(d1, 0, sizeof(d1));
	memset(d2, 0, sizeof(d2));
	int dem = 0;
	while(g--){
		int k, x, y, s, t;
		cin >> k >> x >> y >> s >> t;
		for (int i = 0; i < k; i++){
			int k1 = x + i * s, k2 = y + i * t;
			if (cot[k2] != 0 ) dem++;
			if (hang[k1] != 0 ) dem++;
			if (d1[k1 - k2 + n] != 0) dem++;
			if (d2[k1 + k2 - 1] != 0) dem++;
			cot[k2] ++;
			hang[k1] ++;
			d1[k1 - k2 + n] ++;
			d2[k1 + k2 - 1] ++;
		}
	}
		cout << dem << endl;
}
}
