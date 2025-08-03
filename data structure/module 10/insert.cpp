#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int>mylist={1,2,3,4,5}; 
   list<int>newlist={100,200,300};
   mylist.insert(next(mylist.begin(),2),newlist.begin(),newlist.end());
   for (int val : mylist)
    {
        cout << val << " ";
    }
    return 0;
}