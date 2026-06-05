class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for (int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        multimap<int,int,greater<int>>m2;
        for (auto i:mp){
            m2.insert({i.second, i.first});
        }
        vector<int>v;
        for (auto i: m2){
            v.emplace_back(i.second);
            k--;
            if (k==0) break;

        }
        return v;
    }
};