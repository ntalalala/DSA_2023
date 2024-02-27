#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	string s1, s2;
	cin >> s1 >> s2;
	int res = 0;
	for (int i = 0; i < s1.length(); i++){
		int a = s1[i] - '0';
		int b = s2[i] - '0';
		if (a != b){
			int tmp = abs(a - b);
			int min = tmp > 10 - tmp ? 10 - tmp : tmp;
			res += min;
			}
	}
	cout << res;	
}
	

