#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int>mylist={1,2,3,4,5,3,4,3};
   replace(mylist.begin(),mylist.end(),3,100);//ata jekhane 3 ace sekhane 100 diye daw
   for (int val : mylist)
    {
        cout << val << " ";
    }
    return 0;
}