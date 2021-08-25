class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> v;
        for(int i=0;i<n;i++)
        {
            if((i+1)%3==0)
            {
                if((i+1)%5==0)
                    v.push_back("FizzBuzz");
                else
                    v.push_back("Fizz");
            }
            else
                if((i+1)%5==0)
                    v.push_back("Buzz");
            else
                v.push_back(to_string(i+1));
        }
        return v;
        
    }
};