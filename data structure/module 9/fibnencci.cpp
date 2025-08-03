#include <iostream>
using namespace std;

class fibonneci
{
public:
    int fib(int x);
};

int fibonneci::fib(int x)
{
    if (x == 0)
        return 0;
    else if (x == 1)
        return 1;
    else
        return (fib(x - 1) + fib(x - 2));
}

int main()
{
    fibonneci obj;
    int x;
    cin >> x;
    for (int i = 0; i < x; ++i)
    {
        cout << " " << obj.fib(i);
    }

    return 0;
}
