#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1, s2;
	int doc, ngang, check = 0;
	char a[32][32];
	cin >> s1 >> s2;
	for (int i = 0; i < s1.length(); i++){
		for (int j = 0; j < s2.length(); j++){
			if ( s1[i] == s2[j] ) {
				doc = i;
				ngang = j;
				check = 1;
				break;
			}
		}
		if (check != 0) break;
	}
	for (int i = 0; i < s2.length(); i++){
		for (int j = 0; j < s1.length(); j++){
			a[i][j] = '.';
		}
	}
	for (int i = 0; i < s2.length(); i++){
		a[i][doc] = s2[i];
	}
	for (int i = 0; i < s1.length(); i++){
		a[ngang][i] = s1[i];
	}
	for (int i = 0; i < s2.length(); i++){
		for (int j = 0; j < s1.length(); j++){
			cout << a[i][j];
		}
		cout << endl;
	}
	return 0;
}
