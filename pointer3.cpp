#include<iostream>
using namespace std;
int main()
{
    int x=9;
    int y=23;
    int z=40;
    int i=23;
    int * ptr=&x;   
    int * ptr1=&y;
    int * ptr2=&z;
    int * ptr3=&i;
    cout<<ptr<<" "<<ptr1<<" "<<ptr2<<" "<<ptr3<<endl;
    cout<<ptr<<endl;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
    cout<<ptr3<<endl;
    return 0;
}