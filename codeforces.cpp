#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {  
       long long int n;
       cin>>n;

       long long int res=n/3;
       long long int res1=n-res;

       if(n==1)
       {
        cout<<1<<" "<<0<<endl;
       }
       else if(n==2)
       {
        cout<<0<<" "<<1<<endl;
       }
       else if(res1%2==1)
       {
        res++;
        res1--;
        res1/=2;
        cout<<res<<" "<<res1<<endl;
       }
       else
       {
        cout<<res<<" "<<res1/2<<endl;
       }
    }
}


// 334 333
// 10 10
// 1 0
// 10 11
// 333333334 333333333
// 1 2
