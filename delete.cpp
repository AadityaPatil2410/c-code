#include<bits/stdc++.h>
using namespace std;






int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        int index=0;
        vector<pair<char,int>> vec;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            vec.push_back({s[i],i});
        }
        sort(vec.begin(),vec.end());

        // cout<<"After first loop"<<endl;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s.size()==1)
            {
                
                break;
            }
            else if(s.size()==2)
            {
            
                break;
            }
            else
            {   if(vec[i].first=='0')
                {
                    count++;
                    index=vec[i+1].second;
                    continue;
                }
                else if(vec[i].first==vec[i+1].first)
                {
                    
                    index=max(vec[i].second,vec[i+1].second);
                    count++;

                }
                else
                {
                    count++;
                    index=vec[i].second;
                    break;
                }
                

            }
        }
        
        for(int i=count;i<s.size();i++)
        {
            if(vec[i].second<index)
            {
                if(vec[i].first<'9')
                {
                 vec[i].first++;
                }
           }
           
        }
        
        if(s.size()==1)
        {
            cout<<s[0]<<endl;
                  
        }
        else if(s.size()==2)
        {
            if(s[0]>s[1])
            {
                cout<<s[1]<<s[0]<<endl;
            }
            else
            {
                cout<<s[0]<<s[1]<<endl;
            }
                
                
        }
        else
        {
            
        for(auto i=vec.begin();i!=vec.end();i++)
        {
            
            cout<<(*i).first;
        }
        cout<<endl;
        }

        
        



    }

}

