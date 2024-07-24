class Solution {
public:

bool f(string a,int i,int j)
{
      while(i<a.size()&&j>=0&&i<=j)
        {
          if(a[i]==a[j])
          {
            ++i;
            --j;
          }
          else
          return false;
        }
        return true;
}
    bool validPalindrome(string a) {
     int i=0,j=a.size()-1;
      while(i<a.size()&&j>=0&&i<=j)
        {
          if(a[i]==a[j])
          {
            ++i;
            --j;
          }
          else {
            return f(a,i+1,j)||f(a,i,j-1);
          }
        }
        return true;
    }
};