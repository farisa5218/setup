#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int>mylist={1,2,3,4,5};
   mylist.push_back(10);//ata tail insert kore
   mylist.pop_back();//ata tail theke 1ta value delete kore
   mylist.push_front(100);//ata head a 100 insert korbe
   mylist.pop_front();//ata head theke 1ta value delete korbe
   for (int val : mylist)
    {
        cout << val << " ";
    } 
    return 0;
}