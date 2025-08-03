#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   int frq[26]={0};
   for(char c:s)
   {
    frq[c-'a']++;
   }
   for(char i='a';i<'z';i++)//ata a-z porjonto koto bar ace seta check kore
   {
    for(int j=0;j<frq[i-'a'];j++)//count ++ kore
    {
        cout<<i;
    }
   }
    return 0;
}

//aibabe kora jabe




// #include <bits/stdc++.h>
// using namespace std;
// class frq
// {
// public:
//     char value;
//     int count;
// };
// int main()
// {
//     string s;
//     getline(cin, s);
//     frq f[26];
//     for (int i = 0; i < 26; i++)
//     {
//         f[i].value = i + 'a';
//         f[i].count = 0;
//     }
//     for (char c : s)
//     {
//         int ascii = c - 'a';
//         f[ascii].count++;
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         for(int j=0;j<f[i].count;j++)
//         {
//       if(f[i].count>0)
//       {
//           cout << f[i].value ;
//       }
//     }
//     }
//     return 0;
// }