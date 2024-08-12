#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{   
    int n=10;
    while(n){
    cout<<"ENTER FOR 1 for prime 2 for arm,0 for exiting"<<endl;
   // if(n==0) exit;
    cin >> n;
    if(n==0) exit(0);// included in stdlibi
    cout<<"ENTER number"<<endl;
    int in;
    cin>>in;
    switch(n)
    {
        case 1: 
        { int cr=1;
            for(int i=2;i<=in/2;i++)
            {
                if (in%i==0)
                {
                    cr=0;
                    break;
                }
                               
            }
            if(cr!=1) cout<<"NOT PRIME";
            else cout<<"PRIME";
            break;

        }
        case 2:
        {
            int rev,og;
            int ne=0;
            int crp=0;
            og=in;
            while (in)
            {
                in=in/10;
                crp++;
            }
            in=og;
            while(og)
            {
                rev=og%10;
                og=og/10;
                ne+=pow(rev,crp);
            }
            if(ne==in) {cout<<"ITS AN ARMSTRONG"<<endl;}
            else {cout<<"NOT"<<endl;}
            break;

        }
        default: cout<<"error";
    }


    }

}
