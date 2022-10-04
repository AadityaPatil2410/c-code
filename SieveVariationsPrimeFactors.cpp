#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;

vector<bool> isPrime(N,1);
vector<int> hp(N,0),lp(N,0);

int main()
{
    int num;
    cin>>num;
    vector<int> prime_factors;
    isPrime[0]=isPrime[1]=false;

    for(int i=2;i<N;i++)
    {
        if(isPrime[i]==true)
        {
            for(int j=2*i;j<N;j+=i)
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


    while(num>1)
    {
        int prime_factor=hp[num];
        while(num%prime_factor==0)
        {
            num/=prime_factor;
            prime_factors.push_back(prime_factor);
        }
    }

    for(auto it: prime_factors)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
}