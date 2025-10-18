#include <bits/stdc++.h>
using namespace std;
int knapsnack(int n, int weight[], int value[], int w)
{
    if (n < 0 || w == 0)
    {
        return 0;
    }
    if (weight[n - 1] <= w)
    {
        // ata duita kaj korbe seta holo se choice korebe
        // jodi choice kore op1
        int op1 = knapsnack(n - 1, weight, value, w - weight[n - 1]) + value[n - 1];
        // r jodi choice na kore option 2//op2
        int op2 = knapsnack(n - 1, weight, value, w);
        return max(op1, op2);
    }
    else
    {
        int op2 = knapsnack(n - 1, weight, value, w);
        return op2;
    }
}
int main()
{
    int n;
    cin >> n;
    int weight[n+1];
    int value[n+1];
    for (int i = 1; i <= n; i++)
    {
        cin >> weight[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> value[i];
    }
    int w;
    cin >> w;
    cout << knapsnack(n, weight, value, w) << endl;
    return 0;
}