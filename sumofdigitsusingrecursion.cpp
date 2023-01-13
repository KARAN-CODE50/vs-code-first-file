#include <bits/stdc++.h>
using namespace std;

int sums = 0;

int sum(int a)
{

    int b = a % 10;
    a = a / 10;
    sums += b;

    if (a > 0)
    {

        sum(a);
    }

    return sums;
}
int main()
{

    int a = 678;

    sum(a);
    cout << "sum is " << sums;
    return 0;
}