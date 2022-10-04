//Q)Find no of subarraysin an array whose xor is equal to k
#include<bits/stdc++.h>
using namespace std;

void xorfunc(vector<int> &vec,int k)
{   map<int,int> freq;
    int xxor=0,ct=0;

    for(int i=0;i<vec.size();i++)
    {
        xxor=xxor^vec[i];

        if(xxor==k)
        {
            ct++;
        }

        if(freq.find(xxor^k)!=freq.end())
        {
           ct+= freq[xxor^k];
        }

        freq[xxor]+=1;

    }
    cout<<ct<<Endl;
}

int main()
{
    vector<int> vec={4,2,2,6,4};

}