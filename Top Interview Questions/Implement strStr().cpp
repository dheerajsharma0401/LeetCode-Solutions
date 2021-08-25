class Solution {
public:
    int strStr(string haystack, string needle) {
        
          int hlen=haystack.length();
        int nlen=needle.length();
        if(hlen==0 && nlen==0)
            return 0;
        if(nlen==0)
            return 0;
        if(nlen>hlen)
            return -1;
      
       //cout<<hlen<<" "<<nlen<<" ";
        //int index=0;
       // int store=0;
        for(int i=0;i<haystack.length();i++)
        {
            int store=i;
            if(haystack[i]==needle[0])
            {
                int flag=0;
                i++;
                for(int j=1;j<needle.length();j++)
                {
                    if(haystack[i]==needle[j])
                        i++;
                    else
                    {
                        i=store;
                        flag=1;
                        break;
                    }
                }
                
                if(flag==0)
                    return store;
            }
        }
        
        
        return  -1;
        
    }
};