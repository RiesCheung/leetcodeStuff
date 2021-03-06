//
//  main.cpp
//  LeetCodeIDE
//
//  Created by Ries Cheung on 2021-12-16.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    
//    int search(vector<int>& nums, int l, int r ,int target) {
//        int mid = nums[nums.size()/2];
//        if (target == mid){
//            return nums.size()/2;
//        }
//        if (target > mid){
////            std::vector<int> new_half = std::vector<int>(nums.begin() + nums.size()/2, nums.end());
//            return search(nums, target);
//        }
//        else {
//            std::vector<int> new_half = std::vector<int>(nums.begin() ,
//                                                         nums.end() - nums.size()/2);
//            return search(nums, target);
//        }
//        return -1;
//    }
    
    int binarySearch(vector<int> test_data, int l, int r, int x)
    {
        if (r >= l) {
            // The right hand side is the length of the current array
            // -1 is due to 0 indexing
            
            int mid = l + (r - l) / 2;
     
            // If the element is present at the middle
            // itself
            if (test_data[mid] == x)
                return mid;
     
            // If element is smaller than mid, then
            // it can only be present in left subarray
            if (test_data[mid] > x)
                return binarySearch(test_data, l, mid - 1, x);
     
            // Else the element can only be present
            // in right subarray
            return binarySearch(test_data, mid + 1, r, x);
        }
     
        // We reach here when element is not
        // present in array
        return -1;
    }

};


int main(int argc, const char * argv[]) {
    
    vector<int> test_data = {1,2,3,4,5};
    int target = 5;
    
    
//    std::cout << "Hello, World!\n";
    Solution* solution = new Solution();
    cout << solution -> binarySearch(test_data, 0, test_data.size() - 1, target);
    return 0;
    
}
