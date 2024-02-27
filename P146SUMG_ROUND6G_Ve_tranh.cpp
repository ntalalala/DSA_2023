#include<bits/stdc++.h>
using namespace std;
int main(){
	int b1, b2, c1, c2;
	cin >> b1 >> b2 >> c1 >> c2;
	char a[b1][b2];
	for (int i = 0; i < b1; i++){
		for (int j = 0; j < b2; j++){
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < b1; i++){
		for (int k1 = 0; k1 < c1; k1++){
			for (int j = 0; j < b2; j++){
				for (int k2 = 0; k2 < c2; k2++){
					cout << a[i][j];
				}
			}
			cout << endl;
		}
	}
}
