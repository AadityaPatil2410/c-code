#include<bits/stdc++.h>
using namespace std;

void swap(int arr[],int low,int high)
{
    int temp=arr[low];
    arr[low]=arr[high];
    arr[high]=temp;
}

void dnfSort(int arr[],int n)
{
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<high)
    {
        if(arr[mid]==0)
        {
            swap(arr,low,mid);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr,high,mid);
            high--;
        }
    }
}

int main()
{
    int arr[10]={0,0,2,2,2,1,2,1,1,0};
    dnfSort(arr,10);

    for(auto ele : arr)
    {
        cout<<ele<<" ";

    }
    cout<<"\n";
}