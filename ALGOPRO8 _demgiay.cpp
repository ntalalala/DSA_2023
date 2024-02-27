#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m; 
	cin >> n >> m;
	int a = (m > n) ? n : m;
	int b = abs(m-n)/2;
	cout << a << " " << b;
	return 0;
}
