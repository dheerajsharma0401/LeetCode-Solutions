class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> v;
        int len = intervals.size();
        if(len==0)
            return v;
        sort(intervals.begin(),intervals.end());
        v.push_back(intervals[0]);
        for(int i=1;i<len;i++)
        {
           
            if(v[v.size()-1][1]>=intervals[i][0])
            {
                v[v.size()-1][1]=max(intervals[i][1],v[v.size()-1][1]);
                //v[v.size()-1][0]=min(intervals[i][0],v[v.size()-1][0]);
            }
            else
                v.push_back(intervals[i]);
        }
        
        return v;
    }
};