#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }

        for(k=0;k<=i;k++)
        {
            cout<<k+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}