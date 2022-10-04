#include<bits/stdc++.h>
using namespace std;

int countn=0;

int prints(int ind,vector<int> &ds,int s,int sum,int arr[],int n)
{

    if(ind==n)
    {
        if(s==sum)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }


    // ds.push_back(arr[ind]);
    s+=arr[ind];
    int l=prints(ind+1,ds,s,sum,arr,n);
    s-=arr[ind];
    // ds.pop_back();
    int r=prints(ind+1,ds,s,sum,arr,n);
    

    return l+r;



}


int main()
{
    int sum=3;
    vector<int> ds;
    int arr[5]={1,2,1,2,2};
    cout<<prints(0,ds,0,sum,arr,5)<<endl;
}