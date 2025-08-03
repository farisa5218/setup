#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int cls;
    double gpa;
    student(int roll,int cls,double gpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};
student fun()
{
    student rohim(345,9,4.83);
    return rohim;
}
int main()
{
 student ans=fun();
 cout<<ans.roll<<" "<<ans.cls<<" "<<ans.gpa;   
    return 0;
}