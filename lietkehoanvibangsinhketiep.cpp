#include <iostream>
using namespace std;

void HvKe(int a[], int n) {
    // Khởi tạo hoán vị đầu tiên
    for (int i = 1; i <= n; i++)
        a[i] = i;

    while (true) {
        // In ra hoán vị hiện tại
        for (int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << endl;

        // Tìm chỉ số i lớn nhất sao cho a[i] < a[i+1]
        int i = n - 1;
        while (i > 0 && a[i] > a[i + 1])
            i--;

        // Nếu không tìm được, tức đã ở hoán vị cuối cùng
        if (i == 0) 
            return;

        // Tìm chỉ số k lớn nhất sao cho a[k] > a[i]
        int k = n;
        while (a[k] < a[i])
            k--;

        // Đổi chỗ a[i] và a[k]
        swap(a[i], a[k]);

        // Đảo ngược đoạn từ a[i+1] đến a[n]
        int l = i + 1, r = n;
        while (l < r) {
            swap(a[l], a[r]);
            l++;
            r--;
        }
    }
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int a[n + 1]; // Mảng lưu các hoán vị
    HvKe(a, n);   // Gọi hàm sinh hoán vị
    return 0;
}
