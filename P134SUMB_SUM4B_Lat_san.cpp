#include<bits/stdc++.h>
using namespace std;
int main(){
	unsigned long long g, y;
	cin >> g >> y;
	unsigned long long sum = (g + 4) / 2, p = g + y;
	unsigned long long denta = sum * sum - 4 * p;
	unsigned long long a = (sum - sqrt(denta)) / 2;
	cout << a << " " << p / a;
	return 0;
}
