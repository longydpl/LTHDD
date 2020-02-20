#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

class VEHIVLE
{
protected:
    char nhanhieu[30];
    int namsx;
    char hang[30];
};
class OTO:VEHIVLE
{
    int sochongoi;
    float dungtich;
public:
    void nhap();
    void xuat();
};
class MOTO:VEHIVLE
{
    float phankhoi;
public:
    void nhap();
    void xuat();
};
void OTO::nhap()
{
    cout << "Nhan hieu:";
    fflush(stdin);
    gets(nhanhieu);
    cout << "Nam SX:";
    cin >> namsx;
    cout << "Hang SX:";
    fflush(stdin);
    gets(hang);
    cout << "So cho ngoi:";
    cin >> sochongoi;
    cout << "Dung tich:";
    cin >> dungtich;
}
void OTO::xuat()
{
    cout << setw(15) << nhanhieu;
    cout << setw(15) << namsx;
    cout << setw(15) << hang;
    cout << setw(15) << sochongoi;
    cout << setw(15) << dungtich;
}
void MOTO::nhap()
{
    cout << "Nhan hieu:";
    fflush(stdin);
    gets(nhanhieu);
    cout << "Nam SX:";
    cin >> namsx;
    cout << "Hang SX:";
    fflush(stdin);
    gets(hang);
    cout << "Phan khoi:";
    cin >> phankhoi;
}
void MOTO::xuat()
{
    cout << setw(15) << nhanhieu;
    cout << setw(15) << namsx;
    cout << setw(15) << hang;
    cout << setw(15) << phankhoi;
}
int main()
{
    MOTO mt;
    OTO ot;
    cout << "Nhap thong tin xe OTO:\n";
    ot.nhap();
    cout << "Thong tin OTO vua nhap:\n";
    cout << setw(15) << "Nhan Hieu";
    cout << setw(15) << "Nam SX";
    cout << setw(15) << "Hang SX";
    cout << setw(15) << "So cho ngoi";
    cout << setw(15) << "Dung tich";
    cout << endl;
    ot.xuat();
    cout << "\n====================================================================================\n";
    cout << "\nNhap thong tin xe MOTO:\n";
    mt.nhap();
    cout << "Thong tin MOTO vua nhap:\n";
    cout << setw(15) << "Nhan Hieu";
    cout << setw(15) << "Nam SX";
    cout << setw(15) << "Hang SX";
    cout << setw(15) << "Phan khoi";
    cout << endl;
    mt.xuat();
    return 0;
}
