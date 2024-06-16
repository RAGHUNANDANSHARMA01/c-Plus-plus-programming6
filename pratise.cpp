#include<iostream>
using namespace std;
int main()
{
    int i,j,k=0,row;
    cout<<"enter the number of rows:";
    cin>>row;
    for(i=0;i<=row;++i)
    {
        for(j=0;j<=row;++j)
        cout<<++k<<" ";
        cout<<"\n";
    }
    return 0;
}