#include<bits/stdc++.h>
using namespace std;
typedef struct 
{	string ten;
	int ngay;
	int thang;
	int nam;
}	person;
bool sapxep(person p1, person p2){
	if (p1.nam == p2.nam ) {
		if (p1.thang == p2.thang)  return p1.ngay > p2.ngay;
		else return p1.thang>p2.thang;
	}
	else return p1.nam>p2.nam;
}
int main(){
	int n;
	cin >> n;
	vector <person> v;
	while (n--) {
		person p1;
		cin >> p1.ten >> p1.ngay >> p1.thang >> p1.nam;
		v. push_back(p1);
	}
	sort (v.begin(),v.end(),sapxep);
	cout << v[0].ten << endl; 
	cout << v[v.size()-1].ten;
	return 0;
}
