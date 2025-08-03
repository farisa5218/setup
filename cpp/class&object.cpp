#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[100];
    int roll;
    int cls;
    double gpa;
};
int main()
{
    student a,b;
    cin.getline(a.name,100);
    cin>>a.cls>>a.roll>>a.gpa;
    getchar();
    cin.getline(b.name,100);
    cin>>b.cls>>b.roll>>b.gpa;
    cout<<a.name<<" "<<a.cls<<" "<<a.roll<<" "<<a.gpa<<"\n";
    cout<<b.name<<" "<<b.cls<<" "<<b.roll<<" "<<b.gpa<<"\n"; 
    return 0;
}