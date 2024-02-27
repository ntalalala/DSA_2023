#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
	ull y, k, n;
	cin >> y >> k >> n;
	ull a = y / k, b = n / k;
	int check = 0;
	for (int i = a + 1; i <= b; i++){
		check = 1;
		cout << k * i - y << " ";
	}
	if (check == 0) cout << "-1";
	return 0;
}
