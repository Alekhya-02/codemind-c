#include<bits/stdc++.h>
using namespace std;
int gcd(int n,int m)
{
    if(m==0) 
        return n;
    else 
        gcd(m,n%m);
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<gcd(n,m);
}