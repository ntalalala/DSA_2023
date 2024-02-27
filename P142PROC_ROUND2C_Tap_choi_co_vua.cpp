#include<bits/stdc++.h>
using namespace std;
int main(){
	int r1, c1, r2, c2;
	cin >> r1 >> c1 >> r2 >> c2;
	int xe, tg, vua;
	if (r1 != r2 && c1 != c2 ) xe = 2;
	else xe = 1;
	int a = abs(r1 - r2), b = abs(c1 - c2);
	if (a == b) tg = 1;
	else if ((r1 + r2) % 2 == (c1 + c2) % 2) tg = 2;
	else tg = 0;
	vua = a < b ? b : a; 
	cout << xe << " " << tg << " " << vua;
	return 0;
}
