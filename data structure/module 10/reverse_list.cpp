#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int>mylist={1,2,3,4,5};
   mylist.reverse();
   for (int val : mylist)
    {
        cout << val << " ";
    }
    cout<<endl;
    cout<<mylist.front()<<endl;//ata head ke cout korbe
    cout<<mylist.back()<<endl;//ata holo tail;
    cout<<*next(mylist.begin(),2);//ata position ke print kore
    


    return 0;
}