#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

class KHOA
{
    char maKhoa[10];
    char tenKhoa[20];
    char truongKhoa[20];
public:
    friend class TRUONGDH;
};

class BAN
{
    char maBan[10];
    char tenBan[20];
    char NTL[12];
public:
    friend class TRUONGDH;
};

class TRUONG
{
protected:
    char maTruong[10];
    char tenTruong[20];
    char DiaChi[20];
public:
    void nhap();
    void xuat();
};

class TRUONGDH:TRUONG
{
    KHOA x[20];
    int n;
    BAN y[20];
    int m;
public:
    void nhap();
    void xuat();
};

void TRUONG::nhap()
{
    cout << "Ma truong:";
    fflush(stdin);
    gets(maTruong);
    cout << "Ten truong:";
    fflush(stdin);
    gets(tenTruong);
    cout << "Dia chi:";
    fflush(stdin);
    gets(DiaChi);
}

void TRUONG::xuat()
{
    cout << "Ma Truong:" << setw(25) << left << maTruong << "Ten Truong: " << setw(25) << left << tenTruong << endl;
    cout << "Dia chi:" << setw(25) << left << DiaChi <<endl;
}

void TRUONGDH::nhap()
{
    TRUONG::nhap();
    cout << "Nhap so khoa: ";
    cin >> n;
    cout << "Nhap so ban: ";
    cin >> m;
    cout << "Nhap thong tin Khoa:\n";
    for(int i=0;i<n;i++)
    {
        cout << "Ma Khoa:";
        fflush(stdin);
        gets(x[i].maKhoa);
        cout << "Ten Khoa:";
        fflush(stdin);
        gets(x[i].tenKhoa);
        cout << "Truong Khoa:";
        fflush(stdin);
        gets(x[i].truongKhoa);
        cout << "----------------------\n";
    }
    cout << "Nhap thong tin Ban:\n";
    for(int i =0;i<m;i++)
    {
        cout << "Ma Ban:";
        fflush(stdin);
        gets(y[i].maBan);
        cout << "Ten Ban:";
        fflush(stdin);
        gets(y[i].tenBan);
        cout << "Ngay TL(dd/mm/yyyy);";
        fflush(stdin);
        gets(y[i].NTL);
        cout << "----------------------\n";
    }
}

void TRUONGDH::xuat()
{
    int i=0;
    cout << "\n================================================================================================\n";
    TRUONG::xuat();
    cout << "\n------------------------------------------------------------------------------------------\n";
    cout << "Danh sach Khoa:\n";
    cout << "------------------------------------------------------------------------------------------\n";
    cout << "|" << setw(15) << left << "Ma Khoa" << "|" << setw(15) << left << "Ten Khoa" << "|" << setw(15) << left << "Truong Khoa" <<endl;
    cout << "------------------------------------------------------------------------------------------\n";
    for(i=0;i<n;i++)
    {
        cout << "|" << setw(15) << x[i].maKhoa << "|" << setw(15) << left << x[i].tenKhoa << "|" << setw(15) << left << x[i].truongKhoa <<endl;
        cout << "------------------------------------------------------------------------------------------\n";
    }
    cout << "\n------------------------------------------------------------------------------------------\n";
    cout << "Danh sach Ban:\n";
    cout << "------------------------------------------------------------------------------------------\n";
    cout << "|" << setw(15) << left << "Ma ban" << "|" << setw(15) << left << "Ten Ban" << "|" << setw(15) << left << "NgayTL" << endl;
    cout << "------------------------------------------------------------------------------------------\n";
    for(i=0;i<m;i++)
    {
        cout << "|" << setw(15) << left << y[i].maBan << "|" << setw(15) << left << y[i].tenBan << "|" << setw(15) << left << y[i].NTL <<endl;
        cout << "------------------------------------------------------------------------------------------\n";
    }
}
int main()
{
    TRUONGDH a;
    a.nhap();
    a.xuat();
    return 0;
}
