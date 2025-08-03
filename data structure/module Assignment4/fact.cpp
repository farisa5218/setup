#include <iostream>

using namespace std;

class sample 
{
    int num;
public:
    void setvalue() 
    {
        cin>>num;
    }
    friend void mean(sample s);
};

void mean(sample s) 
{
    int n=s.num;
    int first=0,sec=1,next;
    cout<<first<<" "<<sec<<" ";
    for(int i=2;i<=n;i++)
    {
        next=first+sec;
        first=sec;
        sec=next;
        cout<<next<<" ";
    }
}

int main() 
{
    sample x;
    x.setvalue();
    mean(x);
    return 0;
}