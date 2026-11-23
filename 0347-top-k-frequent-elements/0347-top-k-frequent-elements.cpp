class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        vector<int> arr;
        vector<pair<int,int>> vp;
        map<int, int> mp;
        for (int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for (auto p : mp)
        {
            vp.push_back({p.second, p.first});
        }
        sort(vp.begin(), vp.end(), greater<pair<int, int>>());
        for (int i=0; i<k; i++)
        {
            arr.push_back(vp[i].second);
        }
        return arr;
    }
};
