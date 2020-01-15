#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

class CanBo
{
    int maCB;
    char hoten[30];
    int ngay;
    int thang;
    int nam;
    int soNLV;
public:
    void nhap();
    int tinhLuong();
    void xuat();
};
void CanBo::nhap()
{
    cout << "Ma CB: ";
    cin >> maCB;
    cout << "Ho ten: ";
    fflush(stdin);
    gets(hoten);
    cout << "Ngay sinh:\n ";
    cout << "\tNgay: ";
    cin >> ngay;
    cout << "\tThang: ";
    cin >> thang;
    cout << "\tNam: ";
    cin >> nam;
    cout << "So ngay lam viec trong thang: ";
    cin >> soNLV;
}
void CanBo::xuat()
{
    cout << maCB;
    cout << setw(10) << hoten;
    cout << setw(10) << ngay << "/" << thang << "/" << nam ;
    cout << setw(10) << soNLV;
    cout << setw(10) << "\t" << tinhLuong();
}
int CanBo::tinhLuong()
{
    return soNLV*250000;
}
int main()
{
   CanBo cb;
   cb.nhap();
   cout << "maCB";
   cout << setw(10) << "hoten";
   cout << setw(15) << "ngaysinh";
   cout << setw(10) << "soNLV";
   cout << setw(10) << "Luong";
   cout << "\n";
   cb.xuat();
   return 0;
}
