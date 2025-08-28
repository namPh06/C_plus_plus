#include <bits/stdc++.h>
using namespace std;
class Point{
	public : 
	  double x,y;
	friend istream& operator >> (istream &in, Point &A){
		in >> A.x >> A.y;
		return in;
	}
   friend double operator- (Point &A, Point &B){
		return sqrt(pow((A.x - B.x),2) + pow((A.y - B.y),2));
	} 
};
int main(){
	int t;
	cin >> t;
	while (t--){
		Point A,B;
		cin >> A >> B;
		cout <<  fixed << setprecision(2)<< A-B << endl;
	}
	return 0;
}