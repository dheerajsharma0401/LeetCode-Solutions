class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int sum=0;
        
        int len=columnTitle.length();
        int con=64;
        int j=0;
        int l=len;
        l--;
        for(int i=0;i<len;i++)
        {
            sum=sum+(int(columnTitle[l])-64)*pow(26,i);
           l--;
        }
        
        return sum;
    }
};