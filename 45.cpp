#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

class AR
{
    int *VALUE;
    int n;
public:
    void ARRAY1();
    void ARRAY();
    void zARRAY();
    void nhap();
    void xuat();

};
void AR::ARRAY1()
{
    n = 0;
}
void AR::ARRAY()
{
    int i;
    cout << "Nhap n: ";
    cin >> n;
    VALUE = new int(n);
    for(i = 0;i<n;i++)
    {
        VALUE[i] = 0;
    }
}
void AR::zARRAY()
{
    delete VALUE;
    n = 0;
}
void AR::nhap()
{
    for(int  i=0;i<n;i++)
    {
        cout << "Nhap phan tu thu " << i+1 << " : ";
        cin >> VALUE[i];
    }
}
void AR::xuat()
{
    for(int i = 0; i<n ; i++)
    {
        cout << VALUE[i] << " ";
    }
}

int main()
{
    AR a;
    a.ARRAY();
    a.xuat();
    cout << endl;
    a.nhap();
    a.xuat();
    a.zARRAY();
    return 0;
}
