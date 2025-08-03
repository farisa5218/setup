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
student *fun()
{
    student*rohim=new student(342,7,4.98);
    return rohim;
}
int main()
{
    student*ans=fun();
    cout<<ans->roll<<" "<<ans->cls<<" "<<ans->gpa<<"\n";
    delete ans;
    //cout<<ans->roll<<" "<<ans->cls<<" "<<ans->gpa<<"\n";
    //ai line ta just proved korar jonno je ans delete hicce kina
    return 0;
}