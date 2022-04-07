#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num,cnt=0;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>num;
    for(int i=0;i<n;i++)
    {
        if(num==arr[i])
        {
            cnt+=1;
        }

    }
    if(cnt!=0) cout<<"True";
    else cout<<"False";
}