#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	int h = t;
	int a[t + 1];
	memset(a, 0, sizeof(a));
	int i = 1;
	while (t--){
		int tmp;
		cin >> tmp;
		a[tmp] = i;
		i++;
	}
	for (int i = 1; i <= h; i++){
		cout << a[i] << " ";
	}
	return 0;
}
