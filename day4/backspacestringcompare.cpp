class Solution {
public:

string f(string s)
{
    stack<char> st;
    string res="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='#')
        {
            if(!res.empty())
            res.pop_back();
        }
        else
        res.push_back(s[i]);
    }
    return res;
}
    bool backspaceCompare(string s, string t) {
 
s=f(s);
t=f(t);
return s==t;
    }
};