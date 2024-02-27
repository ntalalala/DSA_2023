#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[3];
	for (int i = 0; i < 3; i++){
		cin >> a[i];
	}
	sort(a, a + 3);
	int kc1 = a[1] - a[0], kc2 = a[2] - a[1];
	if (kc2 > kc1) cout << a[1] + kc1;
	else if (kc2 < kc1) cout << a[1] - kc2;
	else cout << a[2] + kc1;
	return 0; 
}
