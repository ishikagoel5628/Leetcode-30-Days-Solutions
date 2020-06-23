class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        int c;
        for(auto x:mp)
        {
            if(x.second==1)
                 c=x.first;
        }
        return c;
    }
};
