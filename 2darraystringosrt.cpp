#include <bits/stdc++.h>
using namespace std;

bool comparator(string a, string b)
{
    return a < b;
}
int main()
{

    char arr[5][50] = {{'z', 'e', 'b', 'r', 'a'}, {'y', 'a', 'k', 'u', 't'}, {'c', 'o', 'a', 't'}, {'b', 'o', 'a', 't'}, {'a', 'k', 'i', 'r', 'a', 'a'}};

    string tp[5] = {};
    for (int i = 0; i < 5; i++)
    {
        string s;
        for (int j = 0; i < 50; j++)
        {
            if (arr[i][j] >= 'a' && arr[i][j] <= 'z')
            {
                s += arr[i][j];
            }
            else
            {
                break;
            }
        }
        tp[i] = s;
        s = "";
    }

    sort(tp, tp + 5, comparator);

    for (int i = 0; i < 5; i++)
    {
        cout << tp[i] << endl;
    }

    return 0;
}