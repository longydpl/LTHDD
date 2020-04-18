#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

class NCC
{
    char maNCC[30];
    char tenNCC[30];
    char DC[30];
public:
    void nhap();
    void xuat();
};

class HANG
{
    char tenhang[30];
    float dongia;
    int soluong;
public:
    void nhap();
    void xuat();
    float thanhtien()
    {
        return dongia*soluong;
    }
    friend float congthanhtien(HANG *ds, int n);
};

class PHIEU
{
    char maPHIEU[30];
    char ngaylap[12];
    NCC x;
    int n;
    HANG *ds;
public:
    void nhap();
    void xuat();
};

void NCC::nhap()
{
    cout << "Ma NCC:";
    fflush(stdin);
    gets(maNCC);
    cout << "Ten NCC:";
    fflush(stdin);
    gets(tenNCC);
    cout << "DC:";
    fflush(stdin);
    gets(DC);
}

void NCC::xuat()
{
    cout << "MaNCC: " << setw(15) << maNCC;
    cout << setw(15) << "Ten NCC: " << setw(15) << tenNCC << endl;;
    cout << "Dia chi: " << setw(30) << DC;
}

void HANG::nhap()
{
    cout << "Ten Hang: ";
    fflush(stdin);
    gets(tenhang);
    cout << "Don Gia: ";
    cin >> dongia;
    cout << "So luong: ";
    cin >> soluong;
}

void HANG::xuat()
{
    cout << setw(15) << tenhang;
    cout << setw(15) << dongia;
    cout << setw(15) << soluong;
    cout << setw(15) << thanhtien();
}

float congthanhtien(HANG *ds, int n)
{
    float S=0;
    for(int i=0;i<n;i++)
    {
        S+=ds[i].thanhtien();
    }
    return S;
}
void PHIEU::nhap()
{
    cout << "Ma phieu:";
    fflush(stdin);
    gets(maPHIEU);
    cout << "Ngay lap(dd/mm/yyyy):";
    fflush(stdin);
    gets(ngaylap);
    fflush(stdin);
    x.nhap();
    fflush(stdin);
    cout << "Nhap so mat hang: ";
    cin >> n;
    ds=new HANG[n];
    for(int i=0;i<n;i++)
    {
        ds[i].nhap();
        cout << "---------------------\n";
    }
}
void PHIEU::xuat()
{
    cout << "======================PHIEU NHAP HANG=======================\n";
    cout << "Ma Phieu: " << setw(15) << maPHIEU;
    cout << setw(15) << "Ngay Lap: " << setw(15) << ngaylap << endl;
    x.xuat() ;
    cout << "\n============================================================\n";
    cout << setw(15) << "Ten Hang";
    cout << setw(15) << "Don Gia";
    cout << setw(15) << "So Luong";
    cout << setw(15) << "Thanh tien";
    cout << "\n============================================================\n";
    for(int i=0;i<n;i++)
    {
        ds[i].xuat();
        cout << endl;
    }
    cout << "\n============================================================\n";
    cout << setw(45) << "Cong thanh tien: " << setw(15) << congthanhtien(ds,n);
}

int main()
{
    PHIEU a;
    a.nhap();
    a.xuat();
    return 0;
}

