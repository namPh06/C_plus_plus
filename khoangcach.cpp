#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
       double a, b, c, d;
        cin >> a >> b >> c >> d;
        double deltaX = c - a;
        double  deltaY = d - b;
        double  distance = sqrt(deltaX * deltaX + deltaY * deltaY);
        cout << fixed << setprecision(4) << distance << endl;
    }
    return 0;
}
