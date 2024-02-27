#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	int a = n > m ? m : n;
	cout << m + n - 1 - a << " " << a;
	return 0;
}
