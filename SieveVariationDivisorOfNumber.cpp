#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;

vector<int> arr[N];


int main()
{

    for(int i=1;i<N;i++)
    {
        for(int j=i;j<N;j+=i)
        {
            arr[j].push_back(i);;
        }
    }

    for(auto it : arr[20])
    {
        cout<<it<<" ";
    }
    cout<<"\n";

}