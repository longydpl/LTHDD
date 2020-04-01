#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

class Student
{
protected:
    char name[30]; // name of student
    int scode; // student code
};
class Score : protected Student
{
protected:
    float score1; // score of subject 1
    float score2; // score of subject 2
};
class Result : private Score
{
protected:
    float sum;   // Sum of student's score
public:
    void input();
    void output();
};
void Result::input()
{
    cout << "Enter name: ";
    fflush(stdin);
    gets(name);
    cout << "Enter student code: ";
    cin >> scode;
    cout << "Enter score of Sub1: ";
    cin >> score1;
    cout << "Enter score of Sub2: ";
    cin >> score2;
}
void Result::output()
{
    sum = score1 + score2;
     cout << setw(25) << name;
     cout << setw(15) << scode;
     cout << setw(15) << sum;
}
int main()
{
    int n;
    Result *LS = new Result[n]; // List Student of a class
    cout << "Enter number of Student (max=100): ";
    cin >> n;
    while(n>100)
    {
        cout << "Enter number of Student (max=100): ";
        cin >> n;
    }
    int i;
    for(i=0;i<n;i++)
    {
        LS[i].input();
    }
    cout << "\n==============================================================================\n";
    cout << setw(25) << "Name";
    cout << setw(15) << "Student Code" ;
    cout << setw(15) << "Sum" ;
    cout << "\n==============================================================================\n";
    for(i=0;i<n;i++)
    {
        LS[i].output();
        cout << endl;
    }
    return 0;
}

