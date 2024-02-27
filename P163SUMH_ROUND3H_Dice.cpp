#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	int c = abs (a - b), giua = 0, dau = 0, cuoi = 0;
	if (c % 2 == 0) giua = 1;
	for (int i = 1; i <= 6; i++){
		if (abs(i - a) < abs(i - b)) dau++;
		else if (abs(i-a) > abs(i-b)) cuoi ++;
	}
	cout << dau << " " << giua << " " << cuoi;
	return 0;
}
