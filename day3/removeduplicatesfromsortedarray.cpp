class Solution {
public:
    int removeDuplicates(vector<int>& a) {

   int i=0,j=1;
   while(j<a.size()&&i<=j)
   {
    if(a[i]!=a[j])
    {
      a[i+1]=a[j];
++i;
    }
    else
    {
        ++j;
    }
   }
return i+1;
    }
};