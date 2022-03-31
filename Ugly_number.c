#include<iostream>
using namespace std;
bool ugly(int n)
{
    cin>>n;
    while(n%2==0)
    {
        n/=2;
    }
    while(n%3==0)
    {
        n/=3;
    }
    while(n%5==0)
    {
        n/=5;
    }
    return n==1;
    
}
int main()
{
    int n;
    cin>>n;
    if(ugly(n))
    {
        cout<<"Ugly Number";
    }
    else
    {
        cout<<"Not Ugly Number";
    }
}