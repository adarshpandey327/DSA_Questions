/*
Question 5
Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

Example 1:
Input: nums = [1,2,3]
Output: 6
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the size of the array" <<endl;
    int n;
    cin >> n;
    vector<int>nums(n);
    cout << "Enter array elements" << endl;
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for (int num : nums) {
        if (num >= max1) {
            max3 = max2;
            max2 = max1;
            max1 = num;
        } else if (num >= max2) {
            max3 = max2;
            max2 = num;
        } else if (num >= max3) {
            max3 = num;
        }

        if (num <= min1) {
            min2 = min1;
            min1 = num;
        } else if (num <= min2) {
            min2 = num;
        }
    }
    int ans =max(max1 * max2 * max3, max1 * min1 * min2);
    return 0;
}
