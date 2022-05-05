#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    for(int i=0;i<sqrt(n)+1;i++)
    {
        if(n==(i*(i+1)))
        {
            c=c+1;
        break;
        }
        
    }
    if(c==1)
    cout<<"YES";
    else
    cout<<"NO";
}