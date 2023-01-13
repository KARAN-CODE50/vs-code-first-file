#include<bits/stdc++.h>
using namespace std;



int main()
{

int arr[7] = {121, 432, 564, 23, 1, 45, 788};
int n = 7;
int temp[7];
int maxs = INT_MIN;
int count=0;

for (int i = 0; i < 7; i++)
{
    temp[i]=arr[i];
    maxs= max(maxs , arr[i]);
}

while(maxs!=0)
{
    maxs/=10;
    count++;
}
 for (int i = 0; i < count; i++)
 {
    
 }
 


 return 0;
}