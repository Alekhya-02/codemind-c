#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int max=0;
    int r;
    while(n!=0)
    {
        r=n%10;
        if(r>max)
        {
           max=r; 
        }
        
        n/=10;
    }
    cout<<max;
    
}