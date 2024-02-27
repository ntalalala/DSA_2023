#include<bits/stdc++.h>
using namespace std;
int main(){
	while(true){
		int a, b;
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		char s[a + 2][b + 2], v[a][b];
		for (int i = 0; i < b + 2; i++){
			s[0][i] = '.';
			s[a + 1][i] = '.';
		}
		for (int i = 0; i < a + 2; i++){
			s[i][0] = '.';
			s[i][b + 1] = '.';
		}
		for (int i = 1; i <= a; i++){
			for (int j = 1; j <= b; j++){
				cin >> s[i][j];
			}
		}
		for (int i = 1; i <= a ; i++){
			for (int j = 1; j <= b ; j++){
				if (s[i][j] != '*'){
					int dem = 0;
					if (s[i-1][j-1] == '*') dem++;
					if (s[i-1][j] == '*') dem++;
					if (s[i-1][j+1] == '*') dem++;
					if (s[i][j-1] == '*') dem++;
					if (s[i][j+1] == '*') dem++;
					if (s[i+1][j-1] == '*') dem++;
					if (s[i+1][j] == '*') dem++;
					if (s[i+1][j+1] == '*') dem++;
					v[i][j] = dem + '0';
				}
				else v[i][j] = '*';
			}
		}
		for (int i = 1; i <= a; i++){
			for (int j = 1; j <= b; j++){
				cout << v[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}
