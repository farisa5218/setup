#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name [100];
    char department [100];
    int totalMarks;
    Student(int _id, char _name [100], char _department [100], int _totalMarks) 
    {
        id = _id;
        name [100] = _name[100];
        department[100] = _department [100];
        totalMarks = _totalMarks;
    }
};

int main() 
{
    int test;
    cin>>test;
    for(int t=0;t<test;t++)
    {
    Student A(0, "", "", 0), B(0, "", "", 0), C(0, "", "", 0);
    cin >> A.id >> A.name >> A.department >> A.totalMarks;
    cin >> B.id >> B.name >> B.department >> B.totalMarks;
    cin >> C.id >> C.name >> C.department >> C.totalMarks;
    if (A.totalMarks >= B.totalMarks && A.totalMarks >= C.totalMarks) 
    {
        cout << A.id << " " << A.name << " " << A.department << " " << A.totalMarks << endl;
    }
    else if (B.totalMarks >= A.totalMarks && B.totalMarks >= C.totalMarks)
        {
        cout << B.id << " " << B.name << " " << B.department << " " << B.totalMarks << endl;
        }
        else
        {
        cout << C.id << " " << C.name << " " << C.department << " " << C.totalMarks << endl;
        }
    }
    return 0;
}
