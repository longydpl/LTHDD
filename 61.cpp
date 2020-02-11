#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

class VECTO
{
    float x,y;
public:
    void nhap();
    void xuat();
    VECTO operator+(VECTO A, VECTO B)
    {
        VECTO C;
        C.x = A.x + B.x;
        C.y = A.y + B.y;
    return C;
    }
    VECTO operator-();
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
int main()
{
    VECTO A,B,S;
    A.nhap();
    A.xuat();
    B.xuat();
    B.nhap();
    S = operator+(A,B);
    S.xuat();
    return 0;
}
