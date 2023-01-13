#include <bits/stdc++.h>
using namespace std;

void evenodd(int arr[], int n)
{
    int oddcount = 0;
    int evencount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    cout << "the number of odds is " << oddcount << endl;
    cout << "the number of even is " << evencount << endl;
    // ab  m edit kr ha 
}

int main()
{

    int arr[6] = {3, 4, 5, 6, 7, 8};
    int n = 6;

    evenodd(arr, 6);
    return 0;
}