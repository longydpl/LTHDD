#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

class sinhvien
{
    int masv;
    char hoten[30];
    float t,l,h;
public:
    void nhap();
    void xuat();
};

void sinhvien::nhap()
{
    cout << "Ma sv: ";
    cin >> masv;
    cout << "Ho ten: ";
    fflush(stdin);
    gets(hoten);
    cout << "Diem Toan: ";
    cin >>t;
    cout << "Diem Ly: ";
    cin >>l;
    cout << "Diem Hoa: ";
    cin >> h;
}
void sinhvien::xuat()
{
    cout << setw(15) << masv;
    cout << setw(30) << hoten;
    cout << setw(10) << t;
    cout << setw(10) << l;
    cout << setw(10) << h;
}
int main()
{
    sinhvien *sv;
    int n,i;
    sv = new sinhvien[n];
    cout << "Nhap so sinh vien : ";
    cin >> n;
    for(i=0;i<n;i++)
    {
       sv[i].nhap();
    }
    cout << setw(15) << "Ma SV" ;
    cout << setw(30) << "Ho va ten";
    cout << setw(10) << "Diem Toan";
    cout << setw(10) << "Diem Ly";
    cout << setw(10) << "Diem Hoa";
    cout << endl;
    for(i=0;i<n;i++)
    {
       sv[i].xuat();
       cout << endl;
    }
    delete sv;
    return 0;
}
