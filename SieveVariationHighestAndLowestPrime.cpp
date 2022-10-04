#include<bits/stdc++.h>
using namespace std;

int n=10;
vector<int> lp(n,0),hp(n,0);
vector<bool> isPrime(n,1);

int main()
{
    isPrime[0]=isPrime[1]=0;

    for(int i=0;i<n;i++)
    {
        if(isPrime[i]==true)
        {
            for(int j=2*i;j<n;j+=i)
            {
                isPrime[j]=false;
                hp[j]=i;
                if(lp[j]==0)
                {
                    lp[j]=i;
                }
            }


        }


    }

    cout<<6<<" "<<lp[6]<<" "<<hp[6]<<endl;


}