#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;

    v.push_back(7);
    v.push_back(1);
    v.push_back(2);
    v.push_back(8);
    v.push_back(6);
    v.push_back(0);

    sort(v.begin(), v.end());

    int k;
    cin >> k;

    cout << "the kth smallest element is" << v[k - 1];

    return 0;
}