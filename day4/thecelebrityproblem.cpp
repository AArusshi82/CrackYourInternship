class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& a, int n) 
    {
        // code here 
        int low=0,high=a.size()-1;
        while(low<high)
        {
            if(a[low][high]==1)
            {
                ++low;
            }
            else if(a[high][low]==1)
            high--;
            else
            {
                low++;
                high--;
            }
        }
        if(low>high)
        return -1;
        for(int i=0;i<a.size();i++)
        {
            if(i==low)
            continue;
            if(a[low][i]==0&&a[i][low]==1)
            continue;
            else
            return -1;
        }
        return low;
        
    }
};