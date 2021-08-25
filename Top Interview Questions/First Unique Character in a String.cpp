class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char,int> m;
        
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        int res=-1;
        int flag=0;
        int store=0;
        char f;
        
        
    /*    for(auto i=m.begin();i!=m.end();i++)
        {
            cout<<i->first<<" "<<i->second<<endl;
        }
       */
        
        
        
        for(auto i:m)
        {
           
            if(i.second==1)
            {
                f=i.first;
               
                ///flag=1;
            
            }
            if(flag==1)
                break;
            store++;
            
            
        }
        
        for(int i=0;i<s.length();i++)
        {
          if(s[i]==f)
              res=i;
        }
        return res;
        
    }
};