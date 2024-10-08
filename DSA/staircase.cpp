#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"enter digit";
            cin>>a[i][j];

            
        }
        
    }
    int k;
    cin>>k;
    int i=0;
    int j=2;
    while(i<3 && j>=0)
    {
        if(k>a[i][j])
        {
            i++;
        }
        else if(k<a[i][j])
        {
            j--;      
        }
        else {
        cout<<"found"<<i<<j; break;}
    }
    if(i==3 || j<0) cout<<"not f";
    
}