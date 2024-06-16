#include<iostream>
using namespace std;
int main()
{
    char ch[20];
    cout<<"waht is your favourite website:";
    cin.getline(ch,20);
    cout<<"visit:www.";cout.write(ch,6);
    cout<<".com"<<endl;

    return 0;
}