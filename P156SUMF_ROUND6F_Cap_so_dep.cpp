#include<bits/stdc++.h>
using namespace std;
int main(){
	long long x, y, m;
	cin >> x >> y >> m;
	long long max = x < y ? y : x;
	long long min = x > y ? y : x;
	long long tong = x + y;
	if (tong < min && || (max == 0 && max < m)) cout << "-1";
	else{
		long long sum = 0;
		int dem = 0;
		while (y < m && x < m){
			sum = x + y;
			x = x < y ? y : x;
			y = sum;
			dem ++;
		}
		cout << dem;
	}
	return 0;
}
