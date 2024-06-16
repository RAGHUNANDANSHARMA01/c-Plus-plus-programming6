#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        int space=2*n-2*i;
        for(j=1;j<=space;j++)
        {
        cout<<" ";
    }
    for(int j=1;j<=i;j++)
    {
        cout<<"*";
    }
cout<<endl;
}
 for(i=n;i>=1;i--)
       {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        int space= 2*n - 2*i;
        for(j=1;j<=space;j++)
        cout<<" ";
    }
    for(int j=1;j<=i;j++)
    {
        cout<<"*";
    }
        return 0;
    }