#include <bits/stdc++.h>
using namespace std;

string length(string str)
{
    string s=str;
    for(int i=1;i>20-str.size();i++)
    {
        s+='0';
    }
    cout<<s<<endl;
    return s;
}

string inttoString(int num)
{
    string str="";
    
    while(num>0)
    {
        int temp=num%2;
        num/=2;
        str+=to_string(temp);
    }
    
    string strn=length(str);
    reverse(strn.begin(),strn.end());
    return strn;
}

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int p,q,r,ans=1;
	    cin>>p>>q>>r;
        string P=inttoString(p);
        string Q=inttoString(q);
        string R=inttoString(r);

        // cout<<P<<endl;
        // cout<<Q<<endl;
        for(int i=0;i<20;i++)
        {
            if((P[i]=='1' && Q[i]=='0' && R[i]=='0') || (P[i]=='0' && Q[i]=='1' && R[i]=='0') || (P[i]=='0' && Q[i]=='0' && R[i]=='1')   )
            {
                ans=0;
                break;
            }
            else if(P[i]=='1' && Q[i]=='1' && R[i]=='1')
            {
                ans=ans*4;
            }
           
        }
        
            // cout<<ans<<endl;
	}
    
	return 0;
}
