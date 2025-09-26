#include<bits/stdc++.h>
using namespace std;

/*Complete the functions below*/
int find(int par[], int x) {
    // add code here
    if (par[x] == x)
        return x;
    int leader ;
    par[x] = leader;
    return find(par,leader);
}

void unionSet(int par[], int x, int z) {
    // add code here.
    int leaderA = find(par,x);
    int leaderB = find(par,z);
    par[leaderA] = leaderB;
}
int main()
{
    //Link: https://www.geeksforgeeks.org/problems/disjoint-set-union-find/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
    return 0;
}