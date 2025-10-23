class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        // Combine names and heights into pairs
        vector<pair<int, string>> people;
        for (int i = 0; i < names.size(); i++) {
            people.push_back({heights[i], names[i]});
        }

        // Sort by height in descending order
        sort(people.begin(), people.end(), [](auto &a, auto &b) {
            return a.first > b.first;
        });

        // Extract names in the new order
        vector<string> order;
        for (auto &p : people) {
            order.push_back(p.second);
        }

        return order;
    }
};
