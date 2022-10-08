#include<bits/stdc++.h>
using namespace std;

//PriorityQueue
//1)Max heap==> priority_queue<int> gquiz
//2)Min heap==> priority_queue<int, vector<int>, greater<int>> abc



//-------------------------------Brute Force approach------------------------------------------------------
// void slidingWindow(int arr[],int n,int k)
// {
    
    
//     for(int i=0;i<=(n-k);i++)
//     {
//         int max=arr[i];

//         for(int j=1;j<k;j++)
//         {
//             if(arr[i+j]>max)
//             {
//                 max=arr[i+j];
//             }
//         }
//         cout<<max<<" ";
//     }
//     cout<<endl;

// }
//----------------------------------------------------------------------------------------------

void usingPriorityQueue(int arr[],int n,int k)
{
    deque<int> dq;
    vector<int> res;

    for(int i=0;i<k;i++)
    {
        while(!dq.empty()  && dq.back()<arr[i])
        {
            dq.pop_back();
        }

        dq.push_back(arr[i]);
    }
    res.push_back(dq.front());

    for(int i=k;i<n;i++)
    {
        if(dq.front()==arr[i-k])
        {
            dq.pop_front();
        }

        while(!dq.empty() && dq.back()<arr[i])
        {
            dq.pop_back();
        }

        dq.push_back(arr[i]);
        res.push_back(dq.front());
    }
    
    for(auto vec : res)
    {
        cout<<vec<<" ";
    }
    cout<<endl;
}

int main()
{

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int k=3;
    usingPriorityQueue(arr,10,3);


}