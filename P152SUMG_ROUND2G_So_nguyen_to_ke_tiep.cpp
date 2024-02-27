#include<bits/stdc++.h>
using namespace std;
bool a[50];
void sangngto(){
	a[0] = 1; a[1] = 1;
	for (int i = 0; i <= sqrt(50); i++){
		int tmp = i*i;
		while (tmp < 50){
			a[tmp] = 1;
			tmp += i;
		}
	}
}
int main(){
	int x, y;
	cin >> x >> y;
	sangngto();
	int check = 1;
	if (a[x] == 0 && a[y] == 0){
		for (int i = x + 1; i < y; i++){
			if ( a[i] == 0 ){
				check = 0;
				break;
		}
	}
}
	else check = 0;
	if (check = 0) cout << "NO";
	else cout << "YES";
	return 0;
}
