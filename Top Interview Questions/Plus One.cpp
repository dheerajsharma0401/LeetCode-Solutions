class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       string str;
       int len=digits.size()-1;
        int i=0;
        vector<int> v;
       
        
       int count=len;
      //  int sum=
        int carry=1;
        while(count>=0)
        {
            int sum=carry;
           
            sum=sum+digits[count];
            
            carry=sum/10;
            sum=sum%10;
            v.push_back(sum);
            count--;
            
            
        }
        if(carry)
            v.push_back(carry);
        reverse(v.begin(),v.end());
        return v;
    }
};