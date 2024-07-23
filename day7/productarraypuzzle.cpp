class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& a, int n) {
       
        //code here
        long long p=1,c=0,s=1;
        for(int i=0;i<a.size();i++)
        {
             if(a[i]==0)
            {
                ++c;
            }
          else
          {
              s*=a[i];
          }
            p*=a[i];
                      
        }
        vector<long long> v;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!=0)
            v.push_back(p/a[i]);
            else if(c>=2)
            v.push_back(0);
            else
            v.push_back(s);
        }
        return v;
    }
};