#include<bits/stdc++.h>
using namespace std;
void insao(int a){
	for (int i = 1; i <= a; i++){
		cout << "*";
	}
}
void ind(int a){
	for (int i = 1; i <= a; i++){
		cout << "D";
	}
}
int main(){
	int n;
	cin >> n;
	for (int i = n/2; i >= 0; i--){
		insao(i);
		ind(n - 2*i);
		insao(i);
		cout << endl;
	}
	for (int i = 1; i <= n/2 ; i++){
		insao(i);
		ind(n - 2*i);
		insao(i);
		cout << endl;
	}
	return 0;
}
