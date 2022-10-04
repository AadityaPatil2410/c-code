#include<bits/stdc++.h>
using namespace std;

void prints(int ind, vector<int> &ds,int s,int sum, int n,int arr[])
{
    if(ind==n)
    {
    if(s==sum)
    {
        for(auto it: ds)
        {
            cout<<it<<" ";
        }
        cout<<"\n";
        return;
    }
    }


    ds.push_back(arr[ind]);
    s+=arr[ind];
    prints(ind+1,ds,s,sum,n,arr);
    s-=arr[ind];
    ds.pop_back();
    prints(ind+1,ds,s,sum,n,arr);

}

int main()
{
    int sum=2;
    vector<int> ds;
    int arr[3]={1,2,1};
    cout<<"Hello"<<endl;
    prints(0,ds,0,sum,3,arr);
    cout<<"Hello"<<endl;

}