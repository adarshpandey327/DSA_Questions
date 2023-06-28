/*
Question 4
Given a sorted array of distinct integers and a target value, return the index if the
target is found. If not, return the index where it would be if it were inserted in
order.

You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2
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

    cout << "Enter the target element" << endl;
    int target;
    cin >> target;

    int s=0;
    int e=(n-1);
    int mid=(s+(e-s)/2);
    while(s<e) {
        if(nums[mid]==target) {
            cout << mid;
            return 0;
        } else if(nums[mid]>target) {
            e=mid-1;
        } else {
            s=mid+1;
        }
        mid=(s+(e-s)/2);
    }

    cout << mid;

    return 0;
}
//https://leetcode.com/problems/search-insert-position/submissions/812212380/
