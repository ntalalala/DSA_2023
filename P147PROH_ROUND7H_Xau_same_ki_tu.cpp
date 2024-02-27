#include<bits/stdc++.h>
using namespace std;
int main(){
	int t = 1;
	while (true){
		string s1, s2;
		cin >> s1 >> s2;
		if (s1 == "END" && s2 == "END") break;
		if (s1.length() != s2.length()) {
			cout << "Case " << t << ": different" << endl; 
		}
		else {
			map <char, int> m1, m2;
			int a = s1.length(), check = 0;
			for (int i = 0; i < a; i++){
				m1[s1[i]] = 0;
				m2[s2[i]] = 0;
			}
			for (int i = 0; i < a; i++){
				m1[s1[i]] ++;
				m2[s2[i]] ++;
			}
			for (int i = 0; i < a; i++){
				if (m1[s1[i]] != m2[s1[i]]) {
					check = 1;
					cout << "Case " << t << ": different" << endl;
					break; 
				}
			}
			if (check == 0) cout << "Case " << t << ": same" << endl;
		}
		t++;
	}
	return 0;
}
