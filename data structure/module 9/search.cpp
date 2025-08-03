#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, r;
    getline(cin, s);
    getline(cin, r);
    size_t found = s.find(r);
    if (found != string::npos)
    {
        cout << "Substring found" << endl;
    }
    else
    {
        cout << "Substring not found" << endl;
    }

    return 0;
}
