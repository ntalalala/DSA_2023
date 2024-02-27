#include<bits/stdc++.h>
using namespace std;
int tong(string a, string b){
	a = '0' + a; b = '0' + b;
	max = a.length() <= b.length() ? b.length() : a.length();
	if (a.length() > b.length()){
		for (int i = b.length(); i < max; i++){
		b = '0' + b;
		}
	}
	else if (a.length() < b.length()){
		for (int i = a.length(); i < max; i++){
			a = '0' + a;
		}
	}
	for (int i = max - 1; i >= 0; i-- ){
		
	}
	
	
}
