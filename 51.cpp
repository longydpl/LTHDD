#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

class person
{
protected:
    char hoten[30];
    char ngaysinh[12];
    char quequan[50];

};
class kysu : person
{
    char nganh[30];
    int NamTN;
public:
    void nhap();
    void xuat();
    friend void Max(kysu *ds, int n);

};
void kysu::nhap()
{
    cout << "Ho ten:";
    fflush(stdin);
    gets(hoten);
    cout << "Nhap ngay sinh(dd/mm/yyyy): ";
    fflush(stdin);
    gets(ngaysinh);
    cout << "Que quan:";
    fflush(stdin);
    gets(quequan);
    cout << "Nganh:";
    fflush(stdin);
    gets(nganh);
    cout << "Nam tot nghiep:";
    cin >> NamTN;
}
void kysu::xuat()
{

    cout << setw(15) << hoten;
    cout << setw(15) << ngaysinh;
    cout << setw(15) << quequan;
    cout << setw(15) << nganh;
    cout << setw(15) << NamTN;
}
void Max(kysu *ds, int n)
{
    int i;
    int max = ds[0].NamTN;
    for(i=1;i<n;i++)
    {
        if(ds[i].NamTN > max) max = ds[i].NamTN;
    }
    for(i=0;i<n;i++)
    {
        if(ds[i].NamTN == max )
        {
            ds[i].xuat();
            cout << endl;
        }
    }
}
int main()
{
    int n;
    kysu *ds = new kysu[n];
    cout << "Nhap so ky su: ";
    cin >> n;
    int i;
    for(i=0;i<n;i++)
    {
      ds[i].nhap();
    }
    cout << "\n===================================================================================================\n";
    cout << setw(15) << "Ho Ten";
    cout << setw(15) << "Ngay sinh";
    cout << setw(15) << "Que Quan";
    cout << setw(15) << "Nganh";
    cout << setw(15) << "Nam TN";
    cout << endl;
    for(i=0;i<n;i++)
    {
        ds[i].xuat();
        cout << endl;
    }
    cout << "\n===================================================================================================\n";
    cout << "Danh sach cac ky su tot nghiep gan day nhat:\n";
    cout << "\n===================================================================================================\n";
    cout << setw(15) << "Ho Ten";
    cout << setw(15) << "Ngay sinh";
    cout << setw(15) << "Que Quan";
    cout << setw(15) << "Nganh";
    cout << setw(15) << "Nam TN";
    cout << endl;
    Max(ds,n);
    return 0;
}
