#include<iostream>
#include<vector>
using namespace std;
bool checkprefixsufixsum(vector<int> &v)
{
    int total_sum=0;
    for(int i=0;i<v.size();i++)
    {
        total_sum+=v[i];
    }
    int prefix_sum=0;
    for(int i=0;i<v.size();i++)
    {
        prefix_sum+=v[i];
        int sufix_sum=total_sum - prefix_sum;
        if(sufix_sum==prefix_sum)
        {
            return true;
        }
    }
    return false;

}
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int ele;
    cin>>ele;
    v.push_back(ele);
}
cout<<"total check prefix sufix sum:"<<checkprefixsufixsum(v)<<endl;
    return 0;
    
}