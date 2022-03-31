#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0,rem;
    cin>>n;
    int temp=n;
    while(n!=0)
    {
        rem=n%10;	
        sum+=rem;	
        n/=10;		
    }
    if(temp%sum==0) cout<<"True";
    else cout<<"False";
}