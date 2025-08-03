#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {1, 2, 5, 8, 5, 3, 4, 3, 8, 6, 5, 7};
   // mylist.sort(); // acending order sort
       mylist.sort(greater<int>());
    mylist.unique();
    //unique ata duplicated value delete kore but duplicated delete korar age must be sort kore nite hobe 
    //na hole delete hobe na
    for (int val : mylist)
    {
        cout << val << " ";
    }

    return 0;
}