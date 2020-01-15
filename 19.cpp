#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

class HCN
{
    int D;
    int R;
public:
    void nhap();
    void ve();
    float dt();
    float cv();
};
void HCN::nhap()
{
    cout << "Chieu dai: ";
    cin >> D;
    cout << "Chieu rong: ";
    cin >> R;
}
float HCN::cv()
{
    return 2*(D+R);
}
float HCN::dt()
{
    return D*R;
}
void HCN::ve()
{
   for(int i=0;i<R;i++)
   {
       if(i == 0 || i == R-1)
       {
        for(int j=0;j<D;j++)
        cout<< "* ";
        cout << "\n";
       }
       else
       {
        for(int j = 0 ; j<D;j++)
        {
            if(j == 0)
            {
                cout  << "* ";
            }
            else if(j == D-1)
            {
                cout  << "*";
                cout << "\n";
            }
            else cout << "  ";

        }
       }
   }
}

int main()
{
    HCN x;
    x.nhap();
    x.ve();
    cout << "\n===========\n";
    cout << "Chu Vi: ";
    cout << x.cv();
    cout << "\nDien tich: ";
    cout << x.dt();
    return 0;
}
