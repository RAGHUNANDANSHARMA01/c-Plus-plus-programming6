#include<iostream>
using  namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the number:";
    cin>>n;
    for(i=n;i>=0;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
        }
        return 0;
    }