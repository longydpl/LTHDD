#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

class NHANVIEN
{
    char ten[30];
    char chucvu[30];
public:
    void nhap();
    void xuat();
};

class PHONG
{
    char tenP[30];
    char maP[20];
    char truongP[20];
public:
    void nhap();
    void xuat();
};

class TAISAN
{
    char tenTS[20];
    int soluong;
    char tinhtrang[20];
public:
    void nhap();
    void xuat();
    friend int tongsoluong(TAISAN *a, int n);
};

class PHIEU
{
    char maPhieu[10];
    char ngayKK[12];
    NHANVIEN x;
    PHONG y;
    TAISAN *z;
    int n;
public:
    void nhap();
    void xuat();
};

void NHANVIEN::nhap()
{
    cout << "Nhan vien kiem ke:";
    fflush(stdin);
    gets(ten);
    cout << "Chuc vu:";
    fflush(stdin);
    gets(chucvu);
}

void NHANVIEN::xuat()
{
    cout << setw(20) << left << "Nhan vien kiem ke:" << setw(20) << left << ten << setw(20) << left << "Chuc vu" << setw(20) << left << chucvu << endl;
}

void PHONG::nhap()
{
    cout << "Ten Phong:";
    fflush(stdin);
    gets(tenP);
    cout << "Ma Phong:";
    fflush(stdin);
    gets(maP);
    cout << "Truong Phong:";
    fflush(stdin);
    gets(truongP);
}

void PHONG::xuat()
{
    cout << setw(20) << left << "Kiem ke tai phong:" << setw(20) << left << tenP;
    cout << setw(20) << left << "Ma phong" << setw(20) << left << maP << endl;
    cout << setw(20) << left << "Truong Phong:" << setw(20) << left << truongP << endl;
}

void TAISAN::nhap()
{
    cout << "Ten tai san:";
    fflush(stdin);
    gets(tenTS);
    cout << "So luong:";
    cin >> soluong;
    cout << "Tinh trang:";
    fflush(stdin);
    gets(tinhtrang);
}

int tongsoluong(TAISAN *a, int n)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=a[i].soluong;
    }
    return s;
}
void TAISAN::xuat()
{
    cout << "|" << setw(20) << left << tenTS << "|" << setw(20) << left << soluong << "|" << setw(20) << left << tinhtrang << "|" << endl;
}


void PHIEU::nhap()
{
    cout << "Ma phieu:";
    fflush(stdin);
    gets(maPhieu);
    cout << "Ngay kiem ke(dd/mm/yyyy):";
    fflush(stdin);
    gets(ngayKK);
    x.nhap();
    y.nhap();
    cout << "Nhap so tai san:";
    cin >> n;
    z = new TAISAN[n];
    for(int i=0;i<n;i++)
    {
        z[i].nhap();
        cout << "-------------------\n";
    }
}

void PHIEU::xuat()
{
    cout << "\n====================================================================================================\n";
    cout << "------------------------------------PHIEU KIEM KE TAI SAN-------------------------------------------\n";
    cout << "====================================================================================================\n";
    cout << setw(20) << left << "Ma Phieu:" << setw(20) << left << maPhieu << setw(20) << left << "Ngay kiem ke:" << setw(20) << left << ngayKK << endl;
    x.xuat();
    y.xuat();
    cout << endl;
    cout << "\n----------------------------------------------------------------\n";
    cout << "|" << setw(20) << left << "Ten tai san" << "|" << setw(20) << left << "So luong" << "|" << setw(20) << left << "Tinh trang" << "|" << endl;
    cout << "----------------------------------------------------------------\n";
    for(int i=0;i<n;i++)
    {
        z[i].xuat();
        cout << "----------------------------------------------------------------\n";
    }
    cout << endl;
    cout << setw(20) << left << "So tai san da kiem ke:" << setw(20) << left << n;
    cout << setw(20) << left << "Tong so luong:" << setw(20) << left << tongsoluong(z,n) << endl;

}

int main()
{
    PHIEU a;
    a.nhap();
    a.xuat();
    return 0;
}
