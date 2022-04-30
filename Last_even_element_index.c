#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    vector<int>v;
    
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.emplace_back(a);
    }
    vector<int>w;

    for(int i=0;i<v.size();i++)
    {
        if(v[i]%2==0)
        {
            w.emplace_back(i);
        }
    }
    
    cout<<w.back();
}

