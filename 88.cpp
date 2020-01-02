class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.erase(nums1.begin() + m, nums1.end());
        nums2.erase(nums2.begin() + n, nums2.end());
        for(vector<int>::iterator i = nums2.begin(); i < nums2.end(); i++)
            nums1.push_back(*i);
        sort(nums1.begin(), nums1.end());
    }
};
