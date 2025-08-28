#include <bits/stdc++.h>
using namespace std;
struct date{
	string day;
};
string chuanhoa (string &s){
	if (s[1] == '/')
	s = "0" + s;
	if (s[4] == '/')
	s.insert(3,"0");
	return s;
}
bool cmp (date a,date b){
	string s = a.day;
	string t = b.day;
	int n1 = (s[0]-'0')*10 + (s[1]-'0'), t1 = (s[3]-'0')*10 + s[4]-'0', na1 = stoi (s.substr(6));
    int n2 = (t[0]-'0')*10 + (t[1]-'0'), t2 = (t[3]-'0')*10 + t[4]-'0', na2 = stoi (t.substr(6));
    if (na1 != na2)
    return na1 < na2;
    if (t1 != t2)
    return t1 < t2;
    return n1 < n2;
}
int main(){
	int n;
	cin >> n;
	struct date a[n];
	for (int i = 0;i<n;i++){
		cin >> a[i].day;
		chuanhoa(a[i].day);
	}
	sort (a,a+n,cmp);
    for (int i = 0;i<n;i++){
    	cout << a[i].day << endl;
	}
	return 0;
}