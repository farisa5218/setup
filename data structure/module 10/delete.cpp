#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int>mylist={1,2,3,4,5,100,200,300}; 
 mylist.erase(next(mylist.begin(),1),next(mylist.begin(),4));//ata 1 thake 5 index ar age delete korbe
   for (int val : mylist)
    {
        cout << val << " ";
    }
    return 0;
}