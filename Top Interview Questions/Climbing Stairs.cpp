class Solution {
public:
    int mem[46];
    int climbStairs(int n) {
       if(mem[n]!=0)
           return mem[n];
        if(n<0)
            return 0;
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        mem[n]=climbStairs(n-1)+climbStairs(n-2);
        return mem[n];
        
        
    }
};