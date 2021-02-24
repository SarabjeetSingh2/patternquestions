#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,f,l;
    cin>>n;
    f=(n+1)/2;
    l=(n-1)/2;
     for(i=0;i<f;i++)
    {
        for(j=0;j<f-i-1;j++)
        {
            cout<<" ";
        }

        for(k=0;k<2*i+1;k++)
        {
            cout<<k+1;
        }
        cout<<endl;
    }

    for(i=0;i<l;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<" ";
        }

        for(k=0;k<(l-i)*2-1;k++)
        {
            cout<<k+1;
        }
        cout<<endl;
    }
    return 0;
}