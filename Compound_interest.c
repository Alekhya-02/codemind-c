#include<bits/stdc++.h>
using namespace std;
int main()
{
    double p,r,t,res;
    cin>>p>>r>>t;
    res=p*pow((1+r/100),t);
    cout<<fixed<<setprecision(2)<<res;
    return 0;
}