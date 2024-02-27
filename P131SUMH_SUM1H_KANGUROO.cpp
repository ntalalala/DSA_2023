#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	int m = b - a - 1, n = c - b - 1;
	m = m < n ? n : m;
	cout << m;
	return 0;
}
