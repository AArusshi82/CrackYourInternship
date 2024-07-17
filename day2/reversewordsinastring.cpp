class Solution {
public:
    string reverseWords(string s) {
       int i=0;
       while(s[i]==' ')
       {
          ++i;
       }
       string ans="",str="";
       while(i<s.size())
       {
        while(i<s.size()&&s[i]!=' ')
        {
            str+=s[i];
            ++i;
        }
        if(ans=="")
        {
            ans=str;
            str.clear();
        }
        else if(!str.empty())
        {
            ans=str+" "+ans;
            str.clear();
        }
++i;
       }
return ans;

    }
};
