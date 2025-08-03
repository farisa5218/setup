#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);

    // Input array A
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Input array B
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    // Concatenate array B followed by array A
    vector<int> C;

    for (int i = 0; i < B.size(); ++i)
     {
        C.push_back(B[i]);
    }
for (int i = 0; i < A.size(); ++i)
 {
        C.push_back(A[i]);
    }
    for (int i = 0; i < C.size(); ++i)
     {
        cout << C[i] << " ";
    }
    cout << endl;
    return 0;
}
// onno babe kora jai
#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    for (int i = 0; i < N; ++i)
     {
        cin >> A[i];
    }
    for (int i = 0; i < N; ++i)
     {
        cin >> B[i];
    }
    for (int i = 0; i <B.size(); ++i)
     {
        cout << B[i] <<" ";
    }
     for (int i = 0; i <A.size(); ++i)
     {
        cout<<A[i]<<" ";
     }
     cout<<endl;

    return 0;
}
