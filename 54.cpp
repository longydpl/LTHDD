#include<bits/stdc++.h>
using namespace std;

class ELECTRONIC
{
protected:
    int congsuat;
    int dienap;
public:
    ELECTRONIC(int cs, int da);
};
class MAYGIAT:ELECTRONIC
{
    float dungtich;
    string loai;
public:
    MAYGIAT(float dt,string loai1, int da, int cs);
    void xuat();
};
ELECTRONIC::ELECTRONIC(int cs, int da)
{
    congsuat=cs;
    dienap = da;
}
MAYGIAT::MAYGIAT(float dt, string loai1, int da, int cs):ELECTRONIC(cs,da)
{

      dungtich = dt;
      loai =  loai1;
}
void MAYGIAT::xuat()
{
    cout << setw(15) << congsuat;
    cout << setw(15) << loai;
    cout << setw(15) << dienap;
    cout << setw(15) << dungtich;
}
class TULANH:ELECTRONIC
{
    float dungtich;
    int songan;
public:
    TULANH(float dt, int sn, int da, int cs);
    void xuat();
};
TULANH::TULANH(float dt, int sn, int da, int cs):ELECTRONIC(cs,da)
{
    dungtich = dt;
    songan = sn;
}
void TULANH::xuat()
{
    cout << setw(15) << congsuat;
    cout << setw(15) << dienap;
    cout << setw(15) << dungtich;
    cout << setw(15) << songan;
}
int main()
{
    MAYGIAT a = MAYGIAT(9.0,"DUNG",220,1500);
    cout << "Thong tin May Giat:\n";
    cout << setw(15) << "Cong suat";
    cout << setw(15) << "Loai";
    cout << setw(15) << "Dien ap";
    cout << setw(15) << "Dung tich";
    cout << endl;
    a.xuat();
    cout << endl;
    TULANH b = TULANH(14,3,220,1500);
    cout << "Thong tin tu lanh:\n";
    cout << setw(15) << "Cong Suat";
    cout << setw(15) << "Dien ap";
    cout << setw(15) << "Dung tich";
    cout << setw(15) << "So ngan";
    cout << endl;
    b.xuat();
    cout << endl;
    return 0;
}
