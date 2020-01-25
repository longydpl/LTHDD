#include<bits/stdc++.h>

using namespace std;
class PTB2
{
    float a,b,c;
public:
    void nhap();
    void xuat();
    void giai();
};

void PTB2::nhap()
{
    do
    {
      cout << "Nhap a(a!=0): ";
      cin >> a;
    }while(a == 0);
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;
}
void PTB2::xuat()
{
    cout << "\nPhuong trinh vua nhap la: ";
    cout << a << "x^2+" << b << "x+" << c;
}
void PTB2::giai()
{
    float x1,x2;
    float delta = b*b - (4*a*c);
    if(delta < 0) cout << "\nPhuong trinh vo nghiem !";
    else if(delta == 0)
    {
        cout << "\nPhuong trinh co nghiem la : x = " << -b/(2*a);
    }else
    {
        cout << "\nPhuong trinh co 2 nghiem : ";
        cout << "\nx1 = " << (-b +sqrt(delta))/(2*a);
        cout << "\nx2 = " << (-b -sqrt(delta))/(2*a);
    }

}
int main()
{
    PTB2 P,Q;
    P.nhap();
    P.xuat();
    P.giai();
    return 0;
}
