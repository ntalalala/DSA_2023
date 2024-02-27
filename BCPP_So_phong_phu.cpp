#include<bits/stdc++.h>
using namespace std;
bool pp(int a){
	if (a <= 3) return false;
	int sum = 1;
	for (int i = 2 ; i <= sqrt(a); i++){
		if ( a % i == 0) sum += i + a/i;
	}
	int k = sqrt(a);
	if ( k * k == a ) sum -= k;
	return sum > a; 
}
int main(){
	int a, b ;
	cin >> a >> b;
	int dem = 0;
	for (long long i = a; i <= b; i++)
		if (pp(i)) dem++;
	cout << dem;
	return 0;
}
