#include<bits/stdc++.h>
using namespace std;

int main(){
	while (true){
		int a;
		cin >> a;
		if (a == 0) break;
		int dem = 1;
		while (a != 1){
			if (a % 2 == 0) a = a/2;
			else a = a * 3 + 1;
			dem++;
		}
		cout << dem << endl;
	}
	return 0;
}
