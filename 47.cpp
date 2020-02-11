#include<bits/stdc++.h>
#include<conio.h>
#include<iomanip>

using namespace std;
int n,i;
class DOANH_NGHIEP;
class Date
{
private:
    int day;
    int month;
    int year;
public:
    void nhap();
    void xuat();
    friend class DOANH_NGHIEP;
    friend void tongdoanhthu(DOANH_NGHIEP *dn, int n);

};
class DIA_CHI
{
    char dt[12];
    char phuong[30];
    char quan[30];
    char tp[30];
public:
    friend class DOANH_NGHIEP;
    friend void timkiem(DOANH_NGHIEP *dn, int n);
};
class DOANH_NGHIEP
{
private:
    int maDN;
    char tenDN[60];
    Date ngayTL;
    DIA_CHI dc;
    char giamdoc[30];
    long doanhthu;
public:
    void nhap();
    void xuat();
    friend void timkiem(DOANH_NGHIEP *dn, int n);
    friend void tongdoanhthu(DOANH_NGHIEP *dn, int n);
};

void Date::nhap()
{
    cout << "\tNgay: ";
    cin >> day;
    cout << "\tThang: ";
    cin >> month;
    cout << "\tNam: ";
    cin >> year;
}
void Date::xuat()
{
    cout << day << "/" << month << "/" << year << "\t";
}
void DOANH_NGHIEP::nhap()
{
    cout << "Ma DN: ";
    cin >>maDN;
    cout << "Ten doanh nghiep: ";
    fflush(stdin);
    gets(tenDN);
    cout << "Ngay thanh lap: \n";
    ngayTL.nhap();
    cout << "Dia chi: \n";
    cout << "\tDien thoai: ";
    fflush(stdin);
    gets(dc.dt);
    cout << "\tPhuong: ";
    fflush(stdin);
    gets(dc.phuong);
    cout << "\tQuan: ";
    fflush(stdin);
    gets(dc.quan);
    cout << "\tThanh pho: ";
    fflush(stdin);
    gets(dc.tp);
    cout << "Giam doc: ";
    fflush(stdin);
    gets(giamdoc);

}
void DOANH_NGHIEP::xuat()
{
        cout << maDN;
        cout << setw(15) << tenDN << setw(12);
        ngayTL.xuat();
        cout << dc.dt;
        cout << setw(15) << dc.phuong;
        cout << setw(15)<< dc.quan;
        cout << setw(15) << dc.tp;
        cout << setw(15) << giamdoc;
}
void timkiem(DOANH_NGHIEP *dn, int n)
{
      for(int i=0;i<n;i++)
    {
        if(strcmp(dn[i].dc.tp,"Ha Noi") == 0)
            {
                dn[i].xuat();
                cout << endl;
            }
    }
}
void tongdoanhthu(DOANH_NGHIEP *dn, int n)
{

}

int main()
{
    DOANH_NGHIEP *dn = new DOANH_NGHIEP[n];
    cout << "Nhap so doanh nghiep: ";
    cin >> n;
    for(i=0;i<n;i++)
    {
       dn[i].nhap();
    }
    cout << "maDN";
    cout << setw(15) << "tenDN";
    cout << "\t" << setw(12)  << "Ngay thang";
    cout << setw(12) << "Phone";
    cout << setw(15) << "Phuong";
    cout << setw(15) << "Quan";
    cout << setw(15) << "City";
    cout << setw(15) << "GiamDoc";
    cout <<"\n============================================================================================================\n";
    for(i=0;i<n;i++)
    {
        dn[i].xuat();
        cout << "\n";
    }
    cout << "\n Cac doanh nghiep o Ha Noi:\n";
    cout << "maDN";
    cout << setw(15) << "tenDN";
    cout << "\t" << setw(12)  << "Ngay thang";
    cout << setw(12) << "Phone";
    cout << setw(15) << "Phuong";
    cout << setw(15) << "Quan";
    cout << setw(15) << "City";
    cout << setw(15) << "GiamDoc";
    cout <<"\n============================================================================================================\n";
    timkiem(dn,n);
    getch();
    delete(dn);
    return 0;
}
