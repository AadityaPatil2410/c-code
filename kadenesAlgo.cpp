#include<bits/stdc++.h>
using namespace std;

void kadenesAlgo(int arr[],int n)
{
    int currMax=0;
    int maxSum=0;
    vector<int> subarray;

    for(int i=0;i<n;i++)
    {
        currMax=currMax + arr[i];
        subarray.push_back(arr[i]);

        if(currMax>maxSum)
        {
            maxSum=currMax;
        }

        if(currMax<0)
        {
            currMax=0;
            subarray.clear();
        }
    }
    for(auto ele : subarray)
    {
        cout<<ele<<" ";
    }
    cout<<"\n";
}

int main()
{
    int arr[10]={2,2,-3,3,5,7,-10,-15,-17,30};
    kadenesAlgo(arr,10);
    
}