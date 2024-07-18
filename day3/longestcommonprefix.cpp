class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
 
      int mi=INT_MAX;
      for(int i=0;i<s.size();i++)
      {
        if(s[i]=="")
        return s[i];
        int m=s[i].size();
        mi=min(mi,m);
      }
      int x=0;
      string v="";
      cout<<mi;
      for(int i=0;i<mi;i++)
      {
        char c=s[0][i];
        
        x=0;
        for(int j=1;j<s.size();j++)
        {
            if(s[j][i]==c)
            ++x;
        }
        if(x==s.size()-1)
        v.push_back(c);
        else
        return v;
      }
return v;
    }
};