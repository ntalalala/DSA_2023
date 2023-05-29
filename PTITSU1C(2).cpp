#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int x; long long sum;
		cin >> x >> sum;
		int a[x];
		for (int i = 0; i < x; i++) cin >> a[i];
		sort(a, a + x);
		long long max = 0;
		for (int i = 0; i < x - 1; i++){
			for (int j = i + 1; j < x; j++){
				long long h = sum - a[i] - a[j];
				int left = j + 1, right = x - 1, pos = -1;
				while (left <= right){
					int mid = (left + right) / 2;
					if (a[mid] <= h){
						pos = mid;
						left = mid + 1;
					}
					else right = mid - 1;
				}
				if (pos != -1){
					max = max < a[i] + a[j] + a[pos] ? a[i] + a[j] + a[pos] : max;
				}
			}
		}
		cout << max << endl;
	}
}
