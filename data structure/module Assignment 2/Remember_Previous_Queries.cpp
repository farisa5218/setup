#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> mylist;
    int q;
    cin >> q;
    while (q--)
    {
       
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            mylist.push_front(v);
        }
        if (x == 1)
        {
            mylist.push_back(v);
        }
        
        else if (x == 2)
        {
                mylist.erase( next(mylist.begin(), v));
        }
        cout << "L ->";
        for (auto it = mylist.begin(); it != mylist.end(); it++) 
        {
            cout << " " << *it;
        }
        cout << endl;

        cout << "R ->";
        for (auto it = mylist.rbegin();it !=mylist.rend();it++)
        {
            cout << " " << *it;
        }
        cout<<endl;
        if (!mylist.empty())
        {
            cout << " " << *mylist.begin();
        }
        cout << endl;
     }
    return 0;
}
