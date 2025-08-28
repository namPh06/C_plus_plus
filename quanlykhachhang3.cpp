#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<vector>
using namespace std;
class KhachHang {
public:
    string mkh, tkh, gt, ns, dc;
    KhachHang() {}
    friend istream& operator>>(istream& is, KhachHang& kh) {
        getline(is, kh.tkh);
        getline(is, kh.gt);
        getline(is, kh.ns);
        getline(is, kh.dc);
        return is;
    }
};
class MatHang {
public:
    string mmh, tmh, dvt;
    int gm, gb;
    MatHang() {}
    friend istream& operator>>(istream& is, MatHang& mh) {
        getline(is, mh.tmh);
        getline(is, mh.dvt);
        is >> mh.gm >> mh.gb;
        is.ignore();
        return is;
    }
};

class HoaDon {
public:
    string mhd, mkh, mmh;
    int sl;
    HoaDon() {}
    friend istream& operator>>(istream& is, HoaDon& hd) {
        is >> hd.mkh >> hd.mmh >> hd.sl;
        return is;
    }
};
void docDanhSachKhachHang(ifstream& file, vector<KhachHang>& dsKH) {
    int n;
    file >> n;
    file.ignore();
    for (int i = 0; i < n; i++) {
        KhachHang kh;
        file >> kh;
        kh.mkh = "KH" + string(3 - to_string(i + 1).length(), '0') + to_string(i + 1);
        dsKH.push_back(kh);
    }
}
void docDanhSachMatHang(ifstream& file, vector<MatHang>& dsMH) {
    int m;
    file >> m;
    file.ignore(); 
    for (int i = 0; i < m; i++) {
        MatHang mh;
        file >> mh;
        mh.mmh = "MH" + string(3 - to_string(i + 1).length(), '0') + to_string(i + 1);
        dsMH.push_back(mh);
    }
}
void docDanhSachHoaDon(ifstream& file, vector<HoaDon>& dsHD) {
    int k;
    file >> k;
    file.ignore();
    for (int i = 0; i < k; i++) {
        HoaDon hd;
        file >> hd;
        hd.mhd = "HD" + string(3 - to_string(i + 1).length(), '0') + to_string(i + 1);
        dsHD.push_back(hd);
    }
}
void inHoaDon(vector<HoaDon>& dsHD, vector<KhachHang>& dsKH, vector<MatHang>& dsMH) {
    for (HoaDon& hd : dsHD) {
        KhachHang kh;
        for (KhachHang& khach : dsKH) {
            if (khach.mkh == hd.mkh) {
                kh = khach;
                break;
            }
        }
        MatHang mh;
        for (MatHang& matHang : dsMH) {
            if (matHang.mmh == hd.mmh) {
                mh = matHang;
                break;
            }
        }
        long long thanhTien = hd.sl * mh.gb;
        cout << hd.mhd << " " << kh.tkh << " " << kh.dc << " " << mh.tmh << " "
             << mh.dvt << " " << mh.gm << " " << mh.gb << " " << hd.sl << " " << thanhTien << endl;
    }
}

int main() {
    vector<KhachHang> dsKH;
    vector<MatHang> dsMH;
    vector<HoaDon> dsHD;

    ifstream fileKH("KH.in");
    ifstream fileMH("MH.in");
    ifstream fileHD("HD.in");

    docDanhSachKhachHang(fileKH, dsKH);
    docDanhSachMatHang(fileMH, dsMH);
    docDanhSachHoaDon(fileHD, dsHD);

    inHoaDon(dsHD, dsKH, dsMH);

    return 0;
}
