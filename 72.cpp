#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

class School
{
    char Name[30];
    char Date[12];
public:
    friend class Faculty;
};

class Faculty
{
    char Name[30];
    char Date[12];
    School x;
public:
    void Input();
    void Output();
};
class Person
{
protected:
    char Name[30];
    char Birth[12];
    char Address[20];
public:
    void Input();
    void Output();
};

class Student:Person
{
    Faculty y;
    char Class[10];
    float Score;
public:
    void Input();
    void Output();
};

void Faculty::Input()
{
    cout << "Faculty's Name:";
    fflush(stdin);
    gets(Name);
    cout << "Faculty's Date(dd/mm/yyyy):";
    fflush(stdin);
    gets(Date);
    cout << "School's Name:";
    fflush(stdin);
    gets(x.Name);
    cout << "School's Date(dd/mm/yyyy):";
    fflush(stdin);
    gets(x.Date);
}

void Faculty::Output()
{
    cout << setw(20) << left << Name;
    cout << setw(20) << left << Date;
    cout << setw(20) << left << x.Name;
    cout << setw(20) << left << x.Date;
}

void Person::Input()
{
    cout << "Name: ";
    fflush(stdin);
    gets(Name);
    cout << "Birth(dd/mm/yyyy):";
    fflush(stdin);
    gets(Birth);
    cout << "Address:";
    fflush(stdin);
    gets(Address);
}

void Person::Output()
{
    cout << setw(20) << left << Name;
    cout << setw(20) << left << Birth;
    cout << setw(20) << left << Address;
}

void Student::Input()
{
    Person::Input();
    y.Input();
    cout << "Class:";
    fflush(stdin);
    gets(Class);
    cout << "Score:";
    cin >> Score;
}

void Student::Output()
{
    Person::Output();
    y.Output();
    cout << setw(20) << left << Class;
    cout << setw(15) << left << Score;
}

int main()
{
    Student a;
    a.Input();
    cout << "\n===============================================================================================================================================\n";
    cout << setw(20) << left << "Name's Student";
    cout << setw(20) << left << "Birth's Student";
    cout << setw(20) << left << "Address's Student";
    cout << setw(20) << left << "Faculty's Name";
    cout << setw(20) << left << "Faculty's Date";
    cout << setw(20) << left << "School's Name";
    cout << setw(20) << left << "School's Date";
    cout << setw(20) << left << "Class";
    cout << setw(15) << left << "Score";
    cout << "\n===============================================================================================================================================\n";
    a.Output();
    return 0;
}
