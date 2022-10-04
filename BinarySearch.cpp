#include<bits/stdc++.h>
using namespace std;

void binarySearch(int arr[],int n ,int search)
{
    int lo=0,hi=n-1;

    while(hi-lo>1)
    {
        int mid=(hi+lo)/2;

        if(arr[mid]<search)
        {
            lo=mid+1;
        }
        else
        {
            hi=mid;
        }
    }
    if(arr[hi]==search)
    {
        cout<<hi<<endl;
    }
    else if(arr[lo]==search)
    {
        cout<<lo<<endl;
    }
    else
    {

    }
}


int main()
{
    int arr[5]={1,2,3,4,5};
    binarySearch(arr,5,2);



}