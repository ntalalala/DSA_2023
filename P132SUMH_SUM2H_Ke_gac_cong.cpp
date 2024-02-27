#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[3], d[4];
	for (int i = 0; i < 4; i++){
		cin >> d[i];
	}
	cin >> a[0] >> a[1] >> a[2];
	int tong1 = d[0] + d[1], tong2 = d[2]+ d[3];
	int dem, du1, du2;
	for (int i = 0; i < 3; i++ ){
		dem = 0;
		du1 = a[i] % tong1; du2 = a[i] % tong2;
		if (1 <= du1 && du1 <= d[0]) dem++;
		if (1 <= du2 && du2 <= d[2]) dem++;
		if (dem == 0) cout << "none" << endl;
		else if (dem == 1) cout << "one" << endl;
		else cout << "both" << endl;
	}
	return 0;
}
