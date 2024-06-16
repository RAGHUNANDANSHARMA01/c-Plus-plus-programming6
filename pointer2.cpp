#include<iostream>
using namespace std;
int main()
{
    int x=0;
    int y=0;
    int*ptr=&x;
    // int*ptr=&y;
    // cout<<&x<<" "<<&y;
    cout<<ptr;
    return 0;
}