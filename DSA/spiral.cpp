#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[3][4]={{1,2,3,11},{4,5,6,12},{7,8,9,13}};
    int sr=0,er=2,sc=0,ec=3;
   while(sr<=er && sc<=ec)
   {
    for(int i=sc;i<=ec;i++)
    {
        cout<<a[sr][i]<<" ";
    }
    sr++;
    for(int i=sr;i<=er;i++)
    {
        cout<<a[i][ec]<<" ";
    }
    ec--;
    if(sr<=er)// here this is necessary as it will check repetition of elements
    {
    for(int i=ec;i>=sc;i--)
    {
        cout<<a[er][i]<<" ";
    }
    }
    er--;
    if(sc<=ec) // here the same reason
    {
    for(int i=er;i>=sr;i--)
    {
        cout<<a[i][sc]<<" ";
    }
    }
    sc++;

   }
}