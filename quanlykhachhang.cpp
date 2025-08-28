#include <bits/stdc++.h>
using namespace std;

int tgkh = 0, tgmh = 0, tghd = 0;
class KhachHang;
class MatHang;
map<string, KhachHang> KH;
map<string, MatHang> MH;

class KhachHang {
public:
    string mkh, tkh, gt, ns, diachi;

    friend class HoaDon;
    friend istream& operator>>(istream& in, KhachHang& dskh) {
        tgkh++;
        if (tgkh < 10) dskh.mkh = "KH00" + to_string(tgkh);
        else dskh.mkh = "KH0" + to_string(tgkh);

        if (tgkh == 1) { cin.ignore(); }
        getline(cin, dskh.tkh);
        getline(cin, dskh.gt);
        getline(cin, dskh.ns);
        getline(cin, dskh.diachi);

        KH[dskh.mkh] = dskh;
        return in;
    }
};

class MatHang {
public:
    string mmh, tmh, dvt;
    int giamua, giaban;

    friend istream& operator>>(istream& in, MatHang& dsmh) {
        tgmh++;
        if (tgmh < 10) dsmh.mmh = "MH00" + to_string(tgmh);
        else dsmh.mmh = "MH0" + to_string(tgmh);

        cin.ignore(); 
        getline(cin, dsmh.tmh);
        getline(cin, dsmh.dvt);
        cin >> dsmh.giamua >> dsmh.giaban;

        MH[dsmh.mmh] = dsmh;
        return in;
    }

    friend class HoaDon;
};

class HoaDon {
public:
    string mhd, MKH, MMH, TMH, DC, TKH;
    int soluong, GB, GM, loinhuan;

    friend istream& operator>>(istream& in, HoaDon& dshd) {
        cin >> dshd.MKH >> dshd.MMH >> dshd.soluong;
        tghd++;
        KhachHang kh = KH[dshd.MKH];
        dshd.TKH = kh.tkh;
        dshd.DC = kh.diachi;
        MatHang mh = MH[dshd.MMH];
        dshd.TMH = mh.tmh;
        dshd.GB = mh.giaban;
        dshd.GM = mh.giamua;
        dshd.loinhuan = dshd.GB * dshd.soluong - dshd.GM * dshd.soluong;
        return in;
    }

    friend ostream& operator<<(ostream& out, HoaDon& dshd) {
        if (tghd < 10) {
            dshd.mhd = "HD00" + to_string(tghd);
        } else {
            dshd.mhd = "HD0" + to_string(tghd);
        }

        out << dshd.mhd << " " << dshd.TKH << " " << dshd.DC << " " 
             << dshd.TMH << " " << dshd.soluong << " " 
             << dshd.GB * dshd.soluong << " " << dshd.loinhuan << endl;
        return out;
    }

    friend void sapxep(HoaDon dshd[], int K);
};

bool cmp(const HoaDon& a, const HoaDon& b) {
    if (a.loinhuan != b.loinhuan) return a.loinhuan > b.loinhuan;
    return a.mhd < b.mhd;
}

void sapxep(HoaDon dshd[], int K) {
    sort(dshd, dshd + K, cmp);
}

int main() {
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N, M, K, i;

    cin >> N;
    for (i = 0; i < N; i++) cin >> dskh[i];

    cin >> M;
    for (i = 0; i < M; i++) cin >> dsmh[i];

    cin >> K;
    for (i = 0; i < K; i++) cin >> dshd[i];

    sapxep(dshd, K);

    for (i = 0; i < K; i++) cout << dshd[i];

    return 0;
}
