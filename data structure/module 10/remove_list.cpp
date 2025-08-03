#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int>mylist={1,2,1,3,1,4,5,6};
   mylist.remove(1);//akhane joto1 ace sob delete hoye jabe
   for (int val : mylist)
    {
        cout << val << " ";
    } 
    return 0;
}