#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#define PI 3.141592653589793238

bool check(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        double x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        double ab = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        double ac = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
        double bc = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));

        if (!check(ab, ac, bc)) {
            cout << "INVALID\n";
        } else {
            double p = (ab + ac + bc) / 2;
            double s = sqrt(p * (p - ab) * (p - ac) * (p - bc));
            double R = (ab * ac * bc) / (4 * s);
            double S = PI * R * R;
            cout << fixed << setprecision(3) << S << endl;
        }
    }

    return 0;
}
