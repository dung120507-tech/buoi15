#include <iostream>
using namespace std;
string xepLoai(float diem){
    if (diem >= 8){
        return "Xep loai: Gioi";
    }
    else if (diem >= 7){
        return "Xep loai: Kha";
    }
    else if(diem >= 5.5){
        return "Xep loai: Trung binh";
    }
    else {
        return "Xep loai: Yeu";
    }
}
void inBangXepLoai(float diem[], int n){
    int demGioi = 0;
    for (int i = 0; i < n; i++){
        string loai = xepLoai(diem[i]);
        if (loai == "Xep loai: Gioi"){
            demGioi++;
        }
    }
    cout << "Tong so sinh vien da dat loai gioi: " << demGioi;
}
int main(){
    float diem[100];
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;

    if (n <= 0) {
        cout << "So luong sinh vien khong hop le!" << endl;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        cout << "Nhap diem cho sinh vien " << i + 1 << ": ";
        cin >> diem[i];
    }
    inBangXepLoai(diem, n);

    return 0;
}