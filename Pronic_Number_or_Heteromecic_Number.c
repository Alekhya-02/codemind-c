#include<bits/stdc++.h>
using namespace std;
string pronic(int n)
{
    int sum=0,rem,flag=0;
    for(int i=1;i<=(int)sqrt(n);i++)
    {
        if(i*(i+1)==n)
        {
            flag+=1;
            break;
        }
    }
    if(flag==1)     return "YES";
    else    return "NO";
}
int main()
{
    int n;
    cin>>n;
    cout<<pronic(n);
}