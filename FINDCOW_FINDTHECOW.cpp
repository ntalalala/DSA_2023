#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int dem = 0;
	vector <int> v1;
	vector <int> v2;
	for (int i = 0; i < s.length(); i++){
		if (s[i]== '(' && s[i+1] == '(') v1.push_back(i);
		else if (s[i]== ')' && s[i+1] == ')') v2.push_back(i);
	}
	
	for (int i = 0; i < v1.size(); i++){
		for (int j = 0; j < v2.size(); j++){
			if (v1[i] < v2[j]) dem++;
		}
	}
	cout << dem;
	return 0;
}
