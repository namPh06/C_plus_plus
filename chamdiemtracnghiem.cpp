#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		getline (cin,s);
	    vector <string> ans101 = {"A", "B", "B", "A", "D", "C", "C", "A", "B", "D", "C", "C", "A", "B", "D"};
        vector <string> ans102 ={"A", "C", "C", "A", "B", "C", "D", "D", "B", "B", "C", "D", "D", "B", "B"};
        vector < string > v;
        stringstream ss(s);
        string token;
        while (ss >> token){
        	v.push_back(token);
		}
		double cnt = 0;
		if (v[0] == "101")
		{
			for (int i=1;i < v.size();i++){
				if (v[i] == ans101[i-1])
				cnt ++;
			}
			double mark101 = (cnt/15.0)*10.0;
			cout << fixed << setprecision(2)<<mark101 << endl;
		}
		else if (v[0] == "102")
		{
			for (int i=1;i<v.size();i++){
				if (v[i] == ans102[i-1])
				cnt ++;
			}
			double mark102 = (cnt/15.0)*10.0;
			cout << fixed << setprecision(2)<<mark102<<endl;
		}
	}
   return 0;
	}