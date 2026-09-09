#include <iostream>
#include <cmath>
using namespace std;
bool laSoNguyenTo(int n){
    if(n < 2) {
        return false;
    }
        for( int i = 2; i <= sqrt(n); i++){
            if (n % i == 0){
                return false;
            }
        }
        return true;
}
void inSoNguyenTo(int a[], int n){
    cout << "Cac so nguyen to: ";
    for (int i = 0; i < n; i++) {
        if(laSoNguyenTo(a[i])){
            cout << a[i] << " ";
        }
    }
}
int main() {
    int a[100];
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "Nhap phan tu thu " << i + 1 << " : ";
        cin >> a[i];
    }
    inSoNguyenTo(a, n);
    return 0;
}