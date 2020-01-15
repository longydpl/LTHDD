#include<bits/stdc++.h>
#include<conio.h>

using namespace std;
class HangHoa
{
    int mahang;
    char tenhang[30];
    float dongia;
    int soluong;
public:
    void nhap();
    void xuat();
    float thanhtien()
    {
        return dongia*soluong;
    }
};
void HangHoa::nhap()
{
    cout << "Ma Hang: ";
    cin >> mahang;
    cout << "Ten Hang: ";
    fflush(stdin);
    gets(tenhang);
    cout << "Don gia: ";
    cin >> dongia;
    cout << "So luong: ";
    cin >> soluong;
}
void HangHoa::xuat()
{
   cout << mahang;
   cout << setw(30) << tenhang;
   cout << setw(15) << dongia;
   cout << setw(15) << soluong;
   cout << setw(15) << thanhtien();
}

int main()
{
    int n,i;
    HangHoa *a = new HangHoa[n];
    cout << "Nhap n: ";
    cin >> n;
    for(i=0;i<n;i++)
    {
        a[i].nhap();
    }
    cout << "\n================================================================================\n";
   cout << "mahang";
   cout << setw(25) << "tenhang";
   cout << setw(15) << "dongia";
   cout << setw(15) << "soluong";
   cout << setw(15) << "thanhtien";
   cout << "\n";
   for(i=0;i<n;i++)
   {
       a[i].xuat();
       cout << "\n";
   }
   return 0;
}
