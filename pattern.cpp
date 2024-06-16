#include<iostream>
using namespace std;
int main()
{
	int i,j,row,k=1;
	cout<<"enter number of row:";
	cin>>row;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		cout<<k++<<" ";
		cout<<endl;
	}
	return 0;
}
