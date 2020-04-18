#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

class BenhNhan
{
protected:
    char hoten[30];
    char quequan[30];
    int namsinh;
public:
    void nhap();
    void xuat() ;
};

class BenhAn:BenhNhan
{
    char tenbenhan[30];
    float vienphi;
public:
    void nhap1();
    void xuat1();
    int tuoi()
    {
        return (2020 - namsinh);
    }
    friend void sapsep(BenhAn *a, int n);
    friend void tuoi10(BenhAn *a, int n);
    friend void vienphimax(BenhAn *a, int n);
};

void BenhNhan::nhap()
{
    cout << "Ho ten:";
    fflush(stdin);
    gets(hoten);
    cout << "Nam sinh:";
    cin >> namsinh;
    cout << "Que quan:";
    fflush(stdin);
    gets(quequan);
}

void BenhNhan::xuat()
{
    cout << setw(15) << hoten;
    cout << setw(15) << quequan;
    cout << setw(15) << namsinh;
}

void BenhAn::nhap1()
{
   nhap();
   cout << "Ten benh an:";
   fflush(stdin);
   gets(tenbenhan);
   cout << "Vien phi:";
   cin >> vienphi;
}

void BenhAn::xuat1()
{
    xuat();
    cout << setw(15) << tenbenhan;
    cout << setw(15) << vienphi;
    cout << setw(15) << tuoi();
}

void sapsep(BenhAn *a, int n)
{
    for(int i = 0;i<n-1;i++)
    {
        if(a[i].tuoi() < a[i+1].tuoi())
        {
            BenhAn  temp = a[i];
                    a[i] = a[i+1];
                    a[i+1] = temp;
        }
    }
}

void tuoi10(BenhAn *a, int n)
{
    for(int i =0;i<n;i++)
    {
        if(a[i].tuoi() <= 10)
        {
            a[i].xuat1();
            cout << endl;
        }
    }
}

void vienphimax(BenhAn *a, int n)
{
  float maxvp = a[0].vienphi;
  for(int i=1;i<n;i++)
  {
      if (a[i].vienphi > maxvp) maxvp = a[i].vienphi;
  }
  for (int i=0;i<n;i++)
  {
      if (a[i].vienphi == maxvp)
      {
          a[i].xuat1();
          cout << endl;
      }
  }
}
int main()
{
    int n;
    cout << "Nhap N:";
    cin >> n;
    BenhAn *List = new BenhAn[n];
    int i;
    for(i=0;i<n;i++)
    {
        List[i].nhap1();
        cout << "-------------------\n";
    }
    cout << "\n=======================================================================================================\n";
    cout << setw(15) << "HoTen";
    cout << setw(15) << "QueQuan";
    cout << setw(15) << "NamSinh";
    cout << setw(15) << "TenBenhAn";
    cout << setw(15) << "VienPhi";
    cout << setw(15) << "Tuoi";
    cout << "\n=======================================================================================================\n";
    for(i=0;i<n;i++)
    {
        List[i].xuat1();
        cout << endl;
    }
    cout << "\n=======================================================================================================\n";
    cout << "Sap xep theo tuoi giam dan:";
    cout << "\n=======================================================================================================\n";
    cout << setw(15) << "HoTen";
    cout << setw(15) << "QueQuan";
    cout << setw(15) << "NamSinh";
    cout << setw(15) << "TenBenhAn";
    cout << setw(15) << "VienPhi";
    cout << setw(15) << "Tuoi";
    cout << "\n=======================================================================================================\n";
    sapsep(List,n);
    for(i=0;i<n;i++)
    {
        List[i].xuat1();
        cout << endl;
    }
    cout << "\n=======================================================================================================\n";
    cout << "Danh sach benh nhan <= 10 tuoi:";
    cout << "\n=======================================================================================================\n";
    cout << setw(15) << "HoTen";
    cout << setw(15) << "QueQuan";
    cout << setw(15) << "NamSinh";
    cout << setw(15) << "TenBenhAn";
    cout << setw(15) << "VienPhi";
    cout << setw(15) << "Tuoi";
    cout << "\n=======================================================================================================\n";
    tuoi10(List,n);
    cout << "\n=======================================================================================================\n";
    cout << "Benh nhan co tien vien phi cao nhat:";
    cout << "\n=======================================================================================================\n";
    cout << setw(15) << "HoTen";
    cout << setw(15) << "QueQuan";
    cout << setw(15) << "NamSinh";
    cout << setw(15) << "TenBenhAn";
    cout << setw(15) << "VienPhi";
    cout << setw(15) << "Tuoi";
    cout << "\n=======================================================================================================\n";
    vienphimax(List,n);
    return 0;
}
