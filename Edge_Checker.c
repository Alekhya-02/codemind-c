#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if (b-a==1 or a-b==1)
        cout<<"Yes";
    else if(((a==10)and(b==1)) or ((a==1)and(b==10)))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}