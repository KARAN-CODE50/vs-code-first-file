#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    int mid = s + (e - s) / 2; // ye isiliye kra h taki s+e/2 int ki range se bahar na ho jaye

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return -1;
}

int main()
{
    // temp = 7 12 6 4 13 5
    // sorted arr 4 5 6 7 12 13
    // output 2 1 1 2 0 0
    int arr[6] = {7, 12, 6, 4, 13, 5};
    int temp[6];
    int n = 6;
    for (int i = 0; i < 6; i++)
    {
        temp[i] = arr[i];
    }

    sort(arr, arr + 6);

    for (int i = 0; i < 6; i++)
    {
        int k = binarysearch(arr, 6, temp[i]);
        int j = 0;
        j = n - 1 - k;
        temp[i] = j;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << temp[i] << " ";
    }

    return 0;
}