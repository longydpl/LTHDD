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
    friend long tongdoanhthu(DOANH_NGHIEP *dn, int n);

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
    friend long tongdoanhthu(DOANH_NGHIEP *dn, int n);
    friend void sua(DOANH_NGHIEP *dn, int n, int x);
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
    cout << "Doanh thu: ";
    cin >> doanhthu;

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
        cout << setw(15) << doanhthu;
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
long tongdoanhthu(DOANH_NGHIEP *dn, int n)
{
    long S = 0;
    for(int i=0;i<n;i++)
    {
        if(dn[i].ngayTL.year == 2015) S+=dn[i].doanhthu;
    }
    return S;
}
void sua(DOANH_NGHIEP *dn, int n, int x)
{
    int k=0;
    cout << "\nDanh sach Doanh nghiep truoc khi sua:\n";
    cout << "maDN";
    cout << setw(15) << "tenDN";
    cout << "\t" << setw(12)  << "Ngay thang";
    cout << setw(12) << "Phone";
    cout << setw(15) << "Phuong";
    cout << setw(15) << "Quan";
    cout << setw(15) << "City";
    cout << setw(15) << "GiamDoc";
    cout << setw(15) << "Doanhthu";
    cout <<"\n============================================================================================================\n";
    for(int i=0;i<n;i++)
    {
        dn[i].xuat();
        cout << "\n";
    }
    for(int i = 0;i,n;i++)
    {
        if(dn[i].maDN == x)
        {
            dn[i].nhap();
            k=1;
        }
    }
    if(k==0) cout << "\nKhong co doanh nghiep thoa man!!!";
        else
        {
            cout << "\nDanh sach Doanh nghiep sau khi sua:\n";
            cout << "maDN";
            cout << setw(15) << "tenDN";
            cout << "\t" << setw(12)  << "Ngay thang";
            cout << setw(12) << "Phone";
            cout << setw(15) << "Phuong";
            cout << setw(15) << "Quan";
            cout << setw(15) << "City";
            cout << setw(15) << "GiamDoc";
            cout << setw(15) << "Doanhthu";
            cout <<"\n============================================================================================================\n";
            for(int i=0;i<n;i++)
            {
                dn[i].xuat();
                cout << "\n";
            }
        }
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
    cout << setw(15) << "Doanhthu";
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
    cout << setw(15) << "Doanhthu";
    cout <<"\n============================================================================================================\n";
    timkiem(dn,n);
    cout << "Tong doanh thu cua cac doanh nghiep thanh lap nam 2015: " << tongdoanhthu(dn,n);
    cout <<"\n============================================================================================================\n";
    int x;
    cout << "Nhap ma Doanh nghiep can sua: ";
    cin >> x;
    sua(dn,n,x);
    getch();
    delete(dn);
    return 0;
}
