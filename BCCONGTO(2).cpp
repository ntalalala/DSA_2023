#include<bits/stdc++.h>
using namespace std;
int main(){
	while(true){
		long long a;
		cin >> a;
		if (a == 0) break;
		int i = 0;
		long long sum = 0;
		while (a > 0){
			int b = a % 10;
			if (b > 4) b--;
			sum += b * (long long) pow(9, i);
			i++;
			a = a / 10;
		}
		cout << sum << endl;
	}
	return 0;
}
