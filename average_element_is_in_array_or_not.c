#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num,cnt=0,sum=0,avg;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>num;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    avg=sum/n;
    for(int i=0;i<n;i++)
    {
        if(avg==arr[i]) 
            cnt++;
    }
    if(cnt!=0) cout<<"True";
    else cout<<"False";
}