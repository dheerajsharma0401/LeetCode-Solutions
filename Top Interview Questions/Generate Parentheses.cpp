class Solution {
public:
    vector<string> v;
    
    bool isValid(string str)
    {
        stack<char>s;
        
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='(')
                s.push('(');
            else
                if(str[i]==')')
                {
                    if(s.empty())
                        return false;
                    else
                        if(s.top()==')')
                            return false;
                    else if(s.top()=='(')
                        s.pop();
                }
            
        }
        if(!s.empty())
            return false;
        
        return true;
    }
    void solve(int n,string str)
    {
        if(n==0)
        {
            if(isValid(str))
                v.push_back(str);
        }
        else
        {
            solve(n-1,str+'(') ;
            solve(n-1,str+')');
            
                
        }
    }
    vector<string> generateParenthesis(int n) {
        
        solve(2*n,"");
        return v;
        
        
    }
};