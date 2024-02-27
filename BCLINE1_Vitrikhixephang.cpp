#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, a, b;
	cin >> n >> a >> b;
	int dem = 0;
	for (int i = b; i >= 0; i--){ 
		if ( n - 1 - i >= a ) dem ++;
	}
	cout << dem;
	return 0; 
}
