#include <iostream>
using namespace std;

int fib(int n)
{
    int first = 0;
    int second = 1;
    int ans;
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    for (int i = 2; i <= n; i++)
    {
        ans = first + second;
        first = second;
        second = ans;
    }

    return ans;
}

int main()
{

    return 0;
}