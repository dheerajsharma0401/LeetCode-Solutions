class Solution {
public:
    bool isValid(string s) {
        
         stack<int> st;
        for(int i=0;i<s.length();i++)
        {
           
           if(s.length()==0)
               return true;
            if(s.length()==1)
                return false;
           for(int i=0;i<s.length();i++)
           {
               char c=s[i];
               if(s[i]==')'||s[i]=='}' || s[i]==']')
               {
                   if(st.size()==0) return false;
                   if(c==')' && st.top()!='(') return false;
                   if(c=='}' && st.top()!='{' ) return false;
                   if(c==']' && st.top()!='[') return false;
                   st.pop();
                   
               }
               else
                   st.push(s[i]);
           }
           // cout<<st.top()<<" ";
        }
        
        if(st.size()==0)
            return true;
        return false;
    }
};