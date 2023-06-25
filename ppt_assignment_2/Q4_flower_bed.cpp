/*
Question 4
You have a long flowerbed in which some of the plots are planted, and some are not.
However, flowers cannot be planted in adjacent plots.
Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

Example 1:
Input: flowerbed = [1,0,0,0,1], n = 1
Output: true
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
    for(int i=0; i<n; i++) {
        if(nums[i]==0) {
            if((i==0 ||nums[i-1]==0) && (i==n-1  || nums[i+1]==0)) {
                target--;
                nums[i]=1;
            }
        }
    }
    if(target<=0) {
        cout << "TRUE" <<endl;
    } else {
        cout << "FALSE" <<endl;
    }
    return 0;
}

// leetcode->https://leetcode.com/submissions/detail/978773884/
