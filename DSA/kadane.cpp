#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{   int n;
    cin>>n;

    vector<int> a(n);
    cout<<"enter numbers";

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int cs=0;
    int maxs=0;
    for(int i=0;i<n;i++)//kadanes algo is this only which is current summ and max
    {
        cs+=a[i];
        if(cs<0)
        {
            cs=0;
        }
        maxs=max(cs,maxs);

    }

    cout<<maxs;



}

