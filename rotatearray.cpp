// Online C++ compiler to run C++ program online

#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // Write C++ code here

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    int n = v.size();
    int t = 0;
    int k;
    cin >> k;
    if (k > n)
    {
        t = k % n;
    }
    else
    {
        t = k;
    }

    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + t);
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    reverse(v.begin() + t, v.end());

    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}