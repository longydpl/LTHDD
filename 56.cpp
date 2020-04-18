#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

class SanPham
{
protected:
    int maSp;
    char tenSp[30];
    char ngaysx[12];
    float trongluong;
    char mau[10];
};

class HangDienTu:SanPham
{
    float congsuat;
    char ddsd[15];
public:
    void nhap();
    void xuat();
    friend void TrongLuongM(HangDienTu *a, int n);
};

void HangDienTu::nhap()
{
    cout << "Ma SP:";
    cin >> maSp;
    cout << "Ten SP:";
    fflush(stdin);
    gets(tenSp);
    cout << "Ngay SX(dd/mm/yyyy):";
    fflush(stdin);
    gets(ngaysx);
    cout << "Trong luong:";
    cin >> trongluong;
    cout << "Mau sac:";
    fflush(stdin);
    gets(mau);
    cout << "Cong suat:";
    cin >> congsuat;
    cout << "Dong dien sdung:";
    fflush(stdin);
    gets(ddsd);
}

void HangDienTu::xuat()
{
    cout << setw(10) << maSp;
    cout << setw(15) << tenSp;
    cout << setw(15) << ngaysx;
    cout << setw(15) << trongluong;
    cout << setw(10) << mau;
    cout << setw(15) << congsuat;
    cout << setw(15) << ddsd;
}

void TrongLuongM(HangDienTu *a, int n)
{
    float tlmin = a[0].trongluong;
    int i;
    for(i=0;i<n;i++)
        if(a[i].trongluong < tlmin) tlmin = a[i].trongluong;
    for(i=0;i<n;i++)
    {
        if(a[i].trongluong == tlmin)
        {
            a[i].xuat();
            cout << endl;
        }
    }
}
int main()
{
    int n;
    cout << "Nhap N:";
    cin >> n;
    HangDienTu *List = new HangDienTu[n];
    int i;
    for(i=0;i<n;i++)
    {
        List[i].nhap();
        cout << "------------------\n";
    }
    cout << "\n================================================================================================\n";
    cout << setw(10) << "MaSp";
    cout << setw(15) << "TenSp";
    cout << setw(15) << "NgaySx";
    cout << setw(15) << "TrongLuong";
    cout << setw(10) << "MauSac";
    cout << setw(15) << "CongSuat";
    cout << setw(15) << "DDSD";
    cout << "\n================================================================================================\n";
    for(i=0;i<n;i++)
    {
        List[i].xuat();
        cout << endl;
    }
    cout << "\n================================================================================================\n";
    cout << "Cac mat hang co trong luong thap nhat:";
    cout << "\n================================================================================================\n";
    cout << setw(10) << "MaSp";
    cout << setw(15) << "TenSp";
    cout << setw(15) << "NgaySx";
    cout << setw(15) << "TrongLuong";
    cout << setw(10) << "MauSac";
    cout << setw(15) << "CongSuat";
    cout << setw(15) << "DDSD";
    cout << "\n================================================================================================\n";
    TrongLuongM(List,n);
    cout << "\n================================================================================================\n";
    return 0;
}
