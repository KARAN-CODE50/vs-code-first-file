#include <bits/stdc++.h>
using namespace std;

int sum(int arr[][3], int row, int col)

{
    int sums = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            sums += *(*(arr + i) + j);
        }
    }
    return sums;
}
int main()
{

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int col = 3;

    cout << sum(arr, 3, 3);
    return 0;
}
