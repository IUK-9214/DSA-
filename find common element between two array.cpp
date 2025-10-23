#include <vector>
#include <algorithm> // for std::find
using namespace std;

class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int count1 = 0;
        int count2 = 0;

        // Count how many elements of nums1 exist in nums2
        for (int i = 0; i < nums1.size(); i++) {
            if (find(nums2.begin(), nums2.end(), nums1[i]) != nums2.end()) {
                count1++;
            }
        }

        // Count how many elements of nums2 exist in nums1
        for (int i = 0; i < nums2.size(); i++) {
            if (find(nums1.begin(), nums1.end(), nums2[i]) != nums1.end()) {
                count2++;
            }
        }

        result.push_back(count1);
        result.push_back(count2);
        return result;
    }
};
