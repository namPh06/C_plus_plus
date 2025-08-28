#include <iostream>
#include <algorithm>
using namespace std;
class PhanSo {
private:
    int tu, mau;
public:
    void setTu(int tu) {
        this->tu = tu;
    }
    void setMau(int mau) {
        this->mau = mau;
    }

    void rutgon() {
        int gcd = __gcd(tu, mau); 
        tu /= gcd;
        mau /= gcd;
        if (mau < 0) {
            tu = -tu;
            mau = -mau;
        }
    }

    void hienthi() const {
        cout << tu << "/" << mau;
    }

    PhanSo operator+(const PhanSo &other) const {
        int newTu = tu * other.mau + mau * other.tu;
        int newMau = mau * other.mau;
        PhanSo result(newTu, newMau);
        result.rutgon();
        return result;
    }

    PhanSo operator*(PhanSo &other) {
        int newTu = tu * other.tu;
        int newMau = mau * other.mau;
        PhanSo result(newTu, newMau);
        result.rutgon();
        return result;
    }
};

int main() {
    PhanSo x, y;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    x.setTu(a);
    x.setMau(b);
    y.setTu(c);
    y.setMau(d);
    x.rutgon();
    y.rutgon();
    x.hienthi();
    cout << endl;
    y.hienthi();
    cout << endl;
    PhanSo tong = x + y;
    tong.hienthi();
    cout << endl;
    PhanSo tich = x * y;
    tich.hienthi();
    cout << endl;
    return 0;
}