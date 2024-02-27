#include<bits/stdc++.h>
using namespace std;
int main(){
	while (true){
		string s;
		cin >> s;
		if ( s == "#") break;
		int a[4] = {0 , 0 , 0, 0};
		for (int i = 0; i < s.length(); i++){
			if (s[i] == 'Y') a[0]++;
			else if (s[i] == 'N') a[1]++;
			else if (s[i] == 'A') a[2]++;
			else if (s[i] == 'P') a[3]++;
		}
		int k;
		if (s.length() % 2 != 0) k = s.length() / 2 + 1;
		else k = s.length() / 2;
		if (a[2] >= k ) cout << "need quorum" << endl;
		else if (a[0] > a[1]) cout << "yes" << endl;
		else if (a[0] < a[1]) cout << "no" << endl;
		else if (a[0] == a[1]) cout << "tie" << endl;
	}
	return 0;
}
