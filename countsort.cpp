#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {5, 4, 3, 2, 1, 0};
    int g = sizeof(arr) / sizeof(arr[0]);
    char arr2[] = {'z', 'y', 'u', 'i', 'o'};
    int arr3[] = {5, -10, 8, 3, 1};

    int freq[10] = {0};

    for (int i = 0; i < g; i++)
    {
        freq[arr[i]]++;
    }

    for (int i = 0; i < 10; i++)
    {
        if(freq[i]==0)
        {
            continue;
        }
        while (freq[i] != 0)
        {
            cout << i<< " ";
            freq[i]--;
        }
    }

    return 0;
}