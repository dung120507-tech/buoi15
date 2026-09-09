#include <iostream>
using namespace std;
void nhapMang(int a[], int &n){
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << " : ";
        cin >> a[i];
    }
}
int timMax(int a[], int n){
    int maxval = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] > maxval) {
            maxval = a[i];
        }
    }
    return maxval;
}
int timMin(int a[], int n ){
    int minval = a[0];
    for(int i = 1; i < n; i++) {
        if (a[i] < minval){
            minval = a[i];
        }
    }
    return minval;
}
double tinhTrungBinh(int a[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
    }
    return (double)sum / n;
}
int main(){
    int a[100];
    int n;
    cout << "Nhap so phan tu trong mang: ";
    cin >> n;
    for (int i = 0 ; i < n; i++) {
        cout << "Moi nhap phan tu thu " << i + 1 << " : ";
        cin >> a[i];
    }
    cout << "Thong ke mang: \n";
    cout << "Gia tri lon nhat: " << timMax(a,n) << endl;
    cout << "Gia tri nho nhat: " << timMin(a,n) << endl;
    cout << "Gia tri trung binh: " << tinhTrungBinh(a,n);
    return 0;
}