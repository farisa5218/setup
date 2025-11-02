#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string sentence;
        getline(cin, sentence);
        stringstream ss(sentence);

        map<string, int> freq;
        string word;
        string maxWord;
        int maxCount = 0;

        while (ss >> word)
        {
            freq[word]++;
            if (freq[word] > maxCount)
            {
                maxCount = freq[word];
                maxWord = word;
            }
        }

        if (maxCount > 0)
        {
            cout << maxWord << " " << maxCount << endl;
        }
    }
    return 0;
}