#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b)
{
    return a>b;
}

int main()
{
    int arr[]={1,2,3,4,5};
    sort(arr,arr+5,cmp);

    for(auto it: arr)
    {
        cout<<it<<" ";
    }
    cout<<"\n";

}