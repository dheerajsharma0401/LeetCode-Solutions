class Solution {
public:
    int myAtoi(string s) {
        
        long result=0;
        int flag=1;
        
        for(int i=0;i<s.length();i++)
        {
            while(s[i]==' ')
                i++;
            if(s[i]=='-' || s[i]=='+')
            {
                if(s[i++]=='-')
                    flag=-1;
                else
                    flag=1;
            }
            
            while(s[i]>='0' && s[i]<='9')
            {
                result=result*10+s[i++]-'0';
                if(result*flag>=INT_MAX) return INT_MAX;
                if(result*flag<=INT_MIN) return INT_MIN;
                    
            }
            return result*flag;
           
        }
        return result*flag;
         
    }
};