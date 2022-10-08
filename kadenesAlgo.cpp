#include<bits/stdc++.h>
using namespace std;

// void kadenesAlgo(int arr[],int n)
// {
//     int currMax=0;
//     int maxSum=0;
//     vector<int> subarray;
//     vector<int> actsubarray;

//     for(int i=0;i<n;i++)
//     {
//         currMax=currMax + arr[i];
//         subarray.push_back(arr[i]);

//         if(currMax>maxSum)
//         {
//             maxSum=currMax;
//             actsubarray=subarray;
//         }

//         if(currMax<0)
//         {
//             currMax=0;
//             subarray.clear();
//         }
//     }
//     for(auto ele : actsubarray)
//     {
//         cout<<ele<<" ";
//     }
//     cout<<"\n";
// }

// int main()
// {
//     int arr[10]={2,-3,3,5,7,-10,-15,-17,5};
//     kadenesAlgo(arr,9);
    
// }


void kadanesAlgo(int arr[],int n)
{
    int currSum=0;
    int maxSum=0;
    vector<int> subarray;
    vector<int> actsub;


    for(int i=0;i<n;i++)
    {
        currSum+=arr[i];
        subarray.push_back(arr[i]);

        if(currSum>maxSum)
        {
            maxSum=currSum;
            actsub=subarray;
        }

        if(currSum<0)
        {
            currSum=0;
            subarray.clear();
        }

    }

    for(auto vec: actsub)
    {
        cout<<vec<<endl;
    }



}

int main()
{
    int arr[]={2,-3,3,5,7,-10,-15,-17,5};
    kadanesAlgo(arr,9);
}