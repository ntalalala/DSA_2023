#include<bits/stdc++.h>
using namespace std;
bool s[1000];
void sangngto (){
	s[0] = 1; s[1] = 1;
	for (int i = 2; i <= 1000; i++){
		int tmp = i*i;
		while (tmp <= 1000){
			s[tmp] = 1;
			tmp += i;
		}
	}
}
int main (){
	int t;
	cin >> t;
	sangngto();
	while (t--){
		int a;
		cin >> a;
		for (int i = 2; i <= a; i++){
			if (s[i] == 0) cout << i << " ";
		}
	 cout << endl;	
	}
}

