class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
        // Your code here
        int n=s.size();
        int st[n];
        int top=-1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='0'&&s[i]<='9')
            {
                ++top;
                st[top]=s[i]-'0';
            }
            else
            {
               int x=st[top];
               top--;
               int y=st[top];
               int z;
               if(s[i]=='+')
               z=x+y;
               else if(s[i]=='-')
               z=y-x;
               else if(s[i]=='/')
               z=y/x;
               else
               z=y*x;
               st[top]=z;
               
            }
        }
        return st[top];
    }
};