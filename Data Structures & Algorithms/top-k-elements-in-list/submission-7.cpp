class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for (int num:nums){
            freq[num]++;
        }
        vector<vector<int>>v(nums.size()+1);
        for (auto i: freq){
            v[i.second].push_back(i.first);
        }
        vector<int>res;
        for (int i=v.size()-1;i>=0;i--){
            for (int p:v[i]){
                res.push_back(p);
                if (res.size()>=k){
                    return res;
                }
            }
        }
        return res;
    }
};
