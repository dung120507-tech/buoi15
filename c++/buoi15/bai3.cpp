#include <iostream>
using namespace std;
void themMang(int a[], int &n, int x, int viTri){
    if(viTri < 0 || viTri > n) {
        cout << "Vi tri them khong hop le!" << endl;
        return;
    }
   for  (int i = n; i > viTri; i--) {
        a[i] = a[i - 1];
   }
   a[viTri] = x;
   n++;
}
void xoaMang(int a[], int &n, int viTri ) {
    if (viTri < 0 || viTri >= n) {
        cout << "Vi tri them khong hop le!" << endl;
        return;
    }
    for(int i = viTri; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
}
int main() {
    int a[100];
    int n;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << " : ";
        cin >> a[i];
    }
    cout << "Mang ban dau: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    int x;
    int viTri;
    cout << "Nhap phan tu can them: ";
    cin >> x;
    cout << "Nhap vi tri can them: ";
    cin >> viTri;
    themMang(a, n, x, viTri);
    cout << "Mang sau khi them la: ";
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << "Nhap vi tri can xoa: ";
    cin >> viTri;
    xoaMang(a, n, viTri);
    cout << " Mang sau khi them la: ";
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}