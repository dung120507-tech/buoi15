#include <iostream>
using namespace std;
double cong(double a, double b){
    return a + b;
}
double tru(double a, double b){
    return a - b;
}
double nhan(double a, double b){
    return a * b;
}
double chia(double a, double b){
    if(b == 0) {
       cout << "Khong hop le!";
       return 0;
    }
    return a / b;
}
int main (){
    int luachon;
    double a, b;
    do {
    cout << "Hien thi menu: ";
    cout << "1.Phep cong\n";
    cout << "2.Phep tru\n";
    cout << "3.Phep nhan\n";
    cout << "4.Phep chia\n";
    cout << "Nhap lua chon cua ban: ";
    cin >> luachon;
    switch (luachon) {
        case 1:
        cout << "Nhap so thu nhat: ";
        cin >> a;
        cout << "Nhap so thu hai: ";
        cin >> b;
        cout << "Ket qua: " << cong(a,b);
        break;
        case 2:
        cout << "Nhap so thu nhat: ";
        cin >> a;
        cout << "Nhap so thu hai: ";
        cin >> b;
        cout << "Ket qua: " << tru(a,b);
        break;
        case 3:
        cout << "Nhap so thu nhat: ";
        cin >> a;
        cout << "Nhap so thu hai: ";
        cin >> b;
        cout << "Ket qua: " << nhan(a,b);
        break;
        case 4:
        cout << "Nhap so thu nhat: ";
        cin >> a;
        cout << "Nhap so thu hai: ";
        cin >> b;
        cout << "Ket qua: " << chia(a,b);
        break;
        default:
        cout << "Lua chon khong hop le!";
    }
    }while (luachon != 0);
    return 0;
}