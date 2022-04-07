#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ev_sum=0,od_sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            ev_sum=ev_sum+arr[i];
        }
        else
        {
            od_sum+=arr[i];
        }
    }
    cout<<abs(ev_sum-od_sum);
}