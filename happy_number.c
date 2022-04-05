#include<iostream>
using namespace std;
void happy(int n)
{
    int sum=0,rem,x;
    while(n>0)
    {
       rem=n%10; 
       sum+=(rem*rem);
       n=n/10;
    }
    x=sum;
    if(sum<10)
    {
        if(sum==1 or sum==7)
        cout<<"True";
        else
        cout<<"False";
    }
    else
    {
        return happy(x);
    }
}
int main()
{
    int n;
    cin>>n;
    happy(n);
}