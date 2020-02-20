#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

class PRINTER
{
protected:
    float trongluong;
    char hangsx[30];
    int namsx;
    int tocdo;
};
class DOTPRINTER:PRINTER
{
    int matdokim;
public:
    void nhap();
    void xuat();
};
class LASERPRINTER:PRINTER
{
    int dophangiai;
public:
    void nhap();
    void xuat();
};
void DOTPRINTER::nhap()
{
    cout << "Trong luong:";
    cin >> trongluong;
    cout << "Hang SX:";
    fflush(stdin);
    gets(hangsx);
    cout << "Nam SX:";
    cin >> namsx;
    cout << "Toc do:";
    cin >> tocdo;
    cout << "Mat do kim:";
    cin >> matdokim;
}
void DOTPRINTER::xuat()
{
   cout << setw(15) << trongluong;
   cout << setw(15) << hangsx;
   cout << setw(15) << namsx;
   cout << setw(15) << tocdo;
   cout << setw(15) << matdokim;
}
void LASERPRINTER::nhap()
{
    cout << "Trong luong:";
    cin >> trongluong;
    cout << "Hang SX:";
    fflush(stdin);
    gets(hangsx);
    cout << "Nam SX:";
    cin >> namsx;
    cout << "Toc do:";
    cin >> tocdo;
    cout << "Do phan giai:";
    cin >> dophangiai;
}
void LASERPRINTER::xuat()
{
   cout << setw(15) << trongluong;
   cout << setw(15) << hangsx;
   cout << setw(15) << namsx;
   cout << setw(15) << tocdo;
   cout << setw(15) << dophangiai;
}
int main()
{
   LASERPRINTER lsp;
   DOTPRINTER dp;
   cout << "Nhap thong tin may in LASER:\n";
   lsp.nhap();
   cout << "Thong tin may in LASER:\n";
   cout << setw(15) << "trongluong";
   cout << setw(15) << "hangsx";
   cout << setw(15) << "namsx";
   cout << setw(15) << "tocdo";
   cout << setw(15) << "matdokim";
   cout << endl;
   lsp.xuat();
   cout << "\nNhap thong tin may in DOT:\n";
   dp.nhap();
   cout << "Thong tin may in DOT:\n";
   cout << setw(15) << "trongluong";
   cout << setw(15) << "hangsx";
   cout << setw(15) << "namsx";
   cout << setw(15) << "tocdo";
   cout << setw(15) << "dophangiai";
   cout << endl;
   dp.xuat();
   return 0;
}
