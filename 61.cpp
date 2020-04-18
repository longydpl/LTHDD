#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

class VECTO
{
    float x,y;
public:
    void nhap();
    void xuat();
    VECTO operator+(VECTO A);
    VECTO operator-(VECTO A);
    VECTO cong(VECTO A);
};

void VECTO::nhap()
{
    cout << "Nhap gia tri x: ";
    cin >> x;
    cout << "Nhap gia tri y: ";
    cin >> y;
}
void VECTO::xuat()
{
    cout << "Vecto co toa do (" << x << "," << y << ")";
}
VECTO VECTO::operator+(VECTO A)
{
    /*
    */
    VECTO C;
    C.x = this->x+A.x;
    C.y = this->y+A.y;
    return C;
}
VECTO VECTO::operator-(VECTO A)
{
    VECTO C;
    C.x = this->x-A.x;
    C.y = this->y-A.y;
    return C;
}
VECTO VECTO::cong(VECTO A)
{
    VECTO C;
    C.x = this->x + A.x;
    C.y = this->y + A.y;
    return C;
}
int main()
{
    VECTO A,B,C;
    cout << "Nhap Vecto A: \n";
    A.nhap();
    A.xuat();
    cout << "Nhap Vecto B: \n";
    B.nhap();
    B.xuat();
    cout << "\nTong hai Vecto A va Vecto B: ";
    C = A.cong(B);
    C.xuat();
    cout << "\nHieu hai Vecto A va Vecto B: ";
    C = A.operator-(B);
    C.xuat();
    return 0;
}
