#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    char S[100];
    cin >> S;
    char temp;
    for (int i = 0; i <strlen(S)-1; i++) 
    {
        for (int j =i+1; j < strlen(S); j++) 
        {
            if (S[i] > S[j])
             {
                temp = S[i];
                S[i] = S[j];
                S[j] = temp;
            }
        }
    }
    cout << S << endl;

    return 0;
}