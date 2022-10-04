#include<bits/stdc++.h>
using namespace std;


bool is_open(char s)
{
    return (s=='(' || s=='{' || s=='[');
}

bool is_close(char s1, char s2)
{
    return  ((s1=='(' && s2==')') || (s1=='{' && s2=='}') || (s1=='[' && s2==']') );
}


bool validparan(string s)
{
    int n=s.size();
    stack<char> st;
    for(int i=0;i<n;i++)
    {
        char str=s[i];

        if(is_open(str))
        {
            st.push(str);
        }
        else  
        {
            if(st.empty())
            {
                return false;
            }
            else if(!is_close(st.top(),str))
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }

        
    }
       return st.empty();     

}



int main()
{
    if(validparan("[()]{}[]("))
    {
        cout<<"Paranthesis are matching"<<endl;
    }
    else
    {
        cout<<"Paranthesis are not matching"<<endl;
    }

}
