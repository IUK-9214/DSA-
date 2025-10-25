class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;
        for (char n:s)freq[n]++;
        //priority-queue is intiallize
        priority_queue<pair<int, char>>pq;
        //elemnts where push in the priority queue
        for (auto &p:freq) pq.push({p.second,p.first});

        string result;
        while(!pq.empty()){
            auto[count,ch]=pq.top();
            pq.pop();
            result.append(count,ch);
        }
return result;
    }
};