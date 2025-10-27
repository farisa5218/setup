#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> h(n);
        for (int i = 0; i < n; i++)
            cin >> h[i];

        int firstMax = -1, secondMax = -1;
        int idxFirst = -1, idxSecond = -1;

        for (int i = 0; i < n; i++)
        {
            if (h[i] > firstMax)
            {
                secondMax = firstMax;
                idxSecond = idxFirst;

                firstMax = h[i];
                idxFirst = i;
            }
            else if (h[i] > secondMax)
            {
                secondMax = h[i];
                idxSecond = i;
            }
        }

        if (idxFirst < idxSecond)
            cout << idxFirst << " " << idxSecond << endl;
        else
            cout << idxSecond << " " << idxFirst << endl;
    }
    return 0;
}
