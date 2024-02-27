#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		long long a , sum;
		cin >> a >> sum;
		int dem = 0;
		for (int i = 3; i <= sum/2; i++){
			if (( 2 * sum - i*i + i) % (2*i) == 0) dem++;
		}
		cout << a << " " << dem << endl;
	}
	return 0;
}
