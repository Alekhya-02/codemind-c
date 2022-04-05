#include<bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    int sum=0,rem;
    while(n)
    {
        rem=n%10;
        sum=(sum*10)+rem;
        n/=10;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<reverse(n);
}