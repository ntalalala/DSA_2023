#include<bits/stdc++.h>
using namespace std;
bool a[50];
void sangngto(){
	a[1] = 1; a[0] = 1;
	for (int i = 2; i <= sqrt(50); i++){
		int tmp = i*i;
		while (tmp <= 50){
			a[tmp] = 1;
			tmp += i;
		}
	}
}
int main(){
	int x, y;
	cin >> x >> y;
	sangngto();
	if (a[y] != 0) {
		cout << "NO";
		return 0;
	}
	for (int i = x + 1; i < y; i++){
		if (a[i] != 1) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
