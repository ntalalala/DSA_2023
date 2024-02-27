#include<bits/stdc++.h>
using namespace std;
int main(){
	int dem[10];
	memset(dem, 0, sizeof(dem));
	string s1, s2;
	cin >> s1 >> s2;
	for (int i = 0; i < s2.length(); i++){
		dem[s2[i] - '0']++;
	}
	for (int i = 0; i < s1.length(); i++){
		int k = s1[i] - '0';
		for (int j = 9; j > k; j--){
			if (dem[j] > 0){
				dem[j]--;
				s1[i] = j + '0';
				break;
			}
		}
	}
	cout << s1;
	return 0;
}
