#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,a,b,c=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.emplace_back(a);
    }
    cin>>b;
    for(int i=0;i<n;i++)
    {
        if(v[i]==b)
        {
            c++;
        }
    }
    cout<<c;
}