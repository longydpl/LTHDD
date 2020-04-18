#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

class NSX
{
    char tenNSX[30];
    char DC[30];
public:
    void nhap();
    void xuat();
};

class HANG
{
protected:
    char tenhang[30];
    NSX x;
    int DONGIA;
public:
    void nhap();
    void xuat();
};

class DATE
{
    int D,M,Y;
public:
    void nhap();
    void xuat();
};

class TIVI:HANG
{
    float kichthuoc;
    DATE Ngaynhap;
public:
    void nhap();
    void xuat();
};

void NSX::nhap()
{
    cout << "\tTen NSX:";
    fflush(stdin);
    gets(tenNSX);
    cout << "\tDia Chi:";
    fflush(stdin);
    gets(DC);
}

void NSX::xuat()
{
    cout << setw(15) << tenNSX;
    cout << setw(15) << DC;
}

void HANG::nhap()
{
    cout << "Ten Hang: ";
    fflush(stdin);
    gets(tenhang);
    cout << "NSX:\n";
    x.nhap();
    cout << "Don Gia:";
    cin >> DONGIA;
}

void HANG::xuat()
{
    cout << setw(15) << tenhang;
    x.xuat();
    cout << setw(15) << DONGIA;
}

void DATE::nhap()
{
    cout << "\tNgay:";
    cin >> D;
    cout << "\tThang:";
    cin >> M;
    cout << "\tYear:";
    cin >> Y;
}

void DATE::xuat()
{
    cout << D << "/" << M << "/" << Y;
}

void TIVI::nhap()
{
    HANG::nhap();
    cout << "Kich thuoc: ";
    cin >> kichthuoc;
    cout << "Ngay nhap:\n";
    Ngaynhap.nhap();
}

void TIVI::xuat()
{
    HANG::xuat();
    cout << setw(15) << kichthuoc;
    cout << setw(10);
    Ngaynhap.xuat();

}

int main()
{
    TIVI a;
    a.nhap();
    cout << "\n=======================================================================================================\n";
    cout << setw (15) << "Ten Hang";
    cout << setw (15) << "Nha SX";
    cout << setw (17) << "Dia chi NSX";
    cout << setw (15) << "Don Gia";
    cout << setw (15) << "Kich thuoc";
    cout << setw (15) << "Ngay nhap";
    cout << "\n=======================================================================================================\n";
    a.xuat();
    return 0;
}

