#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,f,l,temp;
    cin>>n;
    f=(n+1)/2;
    l=(n-1)/2;
     for(i=0;i<f;i++)
    {
        temp=0;
        for(j=0;j<f-i-1;j++)
        {
            cout<<" ";
        }

        for(k=0;k<2*i+1;k++)
        {
            if(k<=i)
            cout<<k+1;
            else{
             cout<<i-temp;
             temp++;
            }
        }
        cout<<endl;
    }

    for(i=0;i<l;i++)
    {
        temp=0;
        for(j=0;j<=i;j++)
        {
            cout<<" ";
        }

        for(k=0;k<(l-i)*2-1;k++)
        {
            if(k<=(l-i-1))
            cout<<k+1;
            else{
             cout<<(l-i-1)-temp;
             temp++;
            }
        }
        cout<<endl;
    }
    return 0;
}