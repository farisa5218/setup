// ata holo count ar vitite sort input je besi thakbe se age hobe
// akhane choto thake boro seta maintain kore na

#include <bits/stdc++.h>
using namespace std;
class frq
{
public:
    char value;
    int count;
};
bool cmp(frq a, frq b)
{
    if(a.count==b.count)
    {
       return a.value<b.value;
    }
    else
    {
        return a.count>b.count;
    }
}
int main()
{
    string s;
    getline(cin, s);
    frq f[26];
    for (int i = 0; i < 26; i++)
    {
        f[i].value = i + 'a';
        f[i].count = 0;
    }
    for (char c : s)
    {
        int ascii = c - 'a';
        f[ascii].count++;
    }
    sort(f, f + 26, cmp);
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < f[i].count; j++)
        {
            cout<<f[i].value;
        }
    }
    return 0;
}