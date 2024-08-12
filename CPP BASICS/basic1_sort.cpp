#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{   cout<<"TELL THE size";
    int n;
    cin>>n;
    vector <int> input(n);
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    cout<<"tell the resize";
    int re=0;
    cin>>re;
    input.resize(re);
    sort(input.begin(),input.end());
    for(int i=0;i<re;i++)
    {
        cout<<input[i]<<",";
    }
}