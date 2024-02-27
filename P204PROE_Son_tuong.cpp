#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	char s[a][b];
	int dem = 0;
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			cin >> s[i][j];
			if (s[i][j] == 'B') dem++;
		}
	}
	bool flag = 1;
	for (int i = 0; i < a && flag; i++){
		for (int j = 0; j < b; j++){
			if (s[i][j] == 'B'){
				cout << i + (int)sqrt(dem)/2 + 1 << " " << j + (int)sqrt(dem)/2 + 1;
				flag = 0;
				break;
			}
		}
	}
	return 0;
}
