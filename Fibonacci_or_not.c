#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    cin>>n;
    int a=0,b=1;
    if(n==0 || n==1) cout<<"True";
    else
    {
        sum=a+b;
    while(sum<n)
    {
        a=b;
        b=sum;
        sum=a+b;
    }
    if(n==sum) cout<<"True";
    if(n!=sum) cout<<"False";
    }
}