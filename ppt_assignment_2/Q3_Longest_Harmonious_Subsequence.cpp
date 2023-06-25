/*
Question 3
We define a harmonious array as an array where the difference between its maximum value
and its minimum value is exactly 1.

Given an integer array nums, return the length of its longest harmonious subsequence
among all its possible subsequences.

A subsequence of an array is a sequence that can be derived from the array by deleting some or no elements without changing the order of the remaining elements.

Example 1:
Input: nums = [1,3,2,2,5,2,3,7]
Output: 5

Explanation: The longest harmonious subsequence is [3,2,2,2,3].
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
    int size=0;
    sort(nums.begin(),nums.end());
    int i,j;
    for(i=0,j=0; j<n;) {
        if(nums[j]-nums[i]==1) {
            size=max(j-i+1,size);
            j++;
        } else if(nums[j]-nums[i]>1) {
            i++;
        } else {
            j++;
        }
    }
    cout << size<<endl;
    return 0;
}


// leetcode ->594
//   https://leetcode.com/problems/longest-harmonious-subsequence/submissions/979238445/
