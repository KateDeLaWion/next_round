#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    int a[n];
    int k_threashold; // to compare against
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if (i==k-1)
        {
            k_threashold=a[i];
        }
    }
    int output=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]>=k_threashold & a[i]>0)
        {
            output++;
        }
    }
    cout<< output;
}