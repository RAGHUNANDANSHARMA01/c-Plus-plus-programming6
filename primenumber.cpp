#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the number:";
    cin>>n;
    for (i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"not prime";
            break;
    }
    }
    if(i==n)
{
    cout<<"prime number";
}
        return 0;
    }