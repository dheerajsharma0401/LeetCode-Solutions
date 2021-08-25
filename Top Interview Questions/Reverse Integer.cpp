class Solution {
public:
    int reverse(int x) {
        
        int flag=0;
        long long n=0;
        string num=to_string(x);
        if(x<0){
            flag=1;
            num.substr(1);
        }
        
        
        int i=0;
        int j=num.length()-1;
        
        while(i<=j)
        {
            swap(num[i],num[j]);
            i++;
            j--;
        }
        
        n=stol(num);
        
        if(n>INT_MAX || n<INT_MIN)
            return 0;
        
        
        if(flag)
            n=n*(-1);
        
        return (int)n;
            
        
        
        
    }
};