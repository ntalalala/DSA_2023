#include<bits/stdc++.h>
using namespace std;
int main(){
	int min = 100;
	for (int i = 0; i < 3; i++){
		int tmp;
		cin >> tmp;
		int a = tmp - i;
		min = a > min ? min : a;
	}
	cout << min * 3 + 3;
	return 0;
}
