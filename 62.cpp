#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class FRACTION
{
	private:
		float numerator,denominator;
	public:
		void INPUT();
		void OUTPUT();
		FRACTION operator*(FRACTION x)
		{
			FRACTION temp;
			temp.numerator=this->numerator*x.numerator;
			temp.denominator=this->denominator*x.denominator;
			return temp;
		}
		FRACTION operator/(FRACTION x)
		{
			FRACTION temp;
			temp.numerator=this->numerator*x.denominator;
			temp.denominator=this->denominator*x.numerator;
			return temp;
		}
		FRACTION operator+(FRACTION x)
		{
			FRACTION temp;
			temp.numerator=this->numerator*x.denominator+denominator*x.numerator;
			temp.denominator=this->denominator*x.denominator;
			return temp;
		}
		FRACTION operator-(FRACTION x)
		{
			FRACTION temp;
			temp.numerator=this->numerator*x.denominator-denominator*x.numerator;
			temp.denominator=this->denominator*x.denominator;
			return temp;
		}
        friend istream&operator>>(istream& x, FRACTION& y);
        friend ostream&operator<<(ostream& x, FRACTION& y);
};
void FRACTION::INPUT()
{
	cout<<"\tGet numerator: ";cin>>numerator;
	cout<<"\tGet denominator: ";cin>>denominator;
}
void FRACTION::OUTPUT()
{
	cout<<numerator<<"/"<<denominator;
}
istream& operator>>(istream& x, FRACTION& y)
{
    cout << "\n Nhap tu so: ";
    x>>y.numerator;
    cout << "\n Nhap mau so:";
    x>>y.denominator;
    return x;
}

ostream& operator<<(ostream &x, FRACTION &y)
{
    x<<y.numerator<<"/"<<y.denominator;
    return x;
}
int main()
{
	FRACTION a,b;
	cout<<"Get fraction a: \n";
	cin >> a;
	cout<<"Get fraction b: \n";
	cin >> b;
	FRACTION c=b.operator*(a);
	cout<<"a*b= ";c.OUTPUT();
	FRACTION d=b.operator/(a);
	cout<<"\na/b= ";d.OUTPUT();
	FRACTION e=b.operator+(a);
	cout<<"\na+b= ";e.OUTPUT();
	FRACTION f=b.operator-(a);
	cout<<"\na-b= ";f.OUTPUT();
	return 0;
}
