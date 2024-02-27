#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		int a;
		cin >> a;
		string s;
		cin>>s;
		vector <int> v(8,0);
		for (int i = 0; i < s.length()-2; i++){
			string c = s.substr(i,3);
			if (c == "TTT") v[0]++;
			else if ( c == "TTH") v[1]++;
			else if ( c == "THT") v[2]++;
			else if ( c == "THH") v[3]++;
			else if ( c == "HTT") v[4]++;
			else if ( c == "HTH") v[5]++;
			else if ( c == "HHT") v[6]++;
			else if ( c == "HHH") v[7]++;
		}
		cout << a <<" "<< v[0] <<" "<< v[1] << " " << v[2] << " " << v[3] << " " << v[4] << " " << v[5] << " " << v[6] << " " << v[7] << endl;
	}
	return 0;
}
