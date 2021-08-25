class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
      
        vector<int> ans,pcount(26,0),scount(26,0);
        int psize=p.size();
        int ssize=s.size();
       // vector<int> ori;
      // sort(p.begin(),p.end());
        
          if(s.length()<p.length())
              return ans;
          
        for(int i=0;i<psize;i++)
        {
            pcount[p[i]-'a']++;
            scount[s[i]-'a']++;
        }
        if(pcount==scount)
            ans.push_back(0);
        
        
        
        for(int i=psize;i<ssize;i++)
        {
            
           // string temp="";
           scount[s[i]-'a']++;
            
           scount[s[i-psize]-'a']--;
           
            if(scount==pcount)
                ans.push_back(i-psize+1);
            
        }
        return ans;
        
    }
};