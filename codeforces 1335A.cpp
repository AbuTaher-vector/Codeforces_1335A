#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(x<=2) cout<<"0"<<endl;
        else if(x%2==1) cout<<x/2<<endl;
        else if(x%2==0) cout<<x/2-1<<endl;
    }
}
