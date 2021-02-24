#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(k=0;k<n-i;k++)
        {
            cout<<n-i-k;
        }
        cout<<endl;
    }
    return 0;
}