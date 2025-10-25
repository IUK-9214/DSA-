class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int>freq;
        for (int num:arr){
            freq[num]++;
        }
        unordered_set<int>seen;
        for(auto num : freq){
            if(seen.count(num.second)){
                return false;
            }
            seen.insert(num.second);
        }
        return true;
    }
};