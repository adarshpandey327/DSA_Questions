/*
💡 **Q1.** Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

**Example:**
Input: nums = [2,7,11,15], target = 9
Output0 [0,1]

**Explanation:** Because nums[0] + nums[1] == 9, we return [0, 1]*/


//BRUTE FORCE APPROCH

#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the size of the array" <<endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter array elements" << endl;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the target element" << endl;
    int target;
    cin >> target;
    // logic
    pair<int,int>p;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i]+arr[j]==target) {
                p.first=i;
                p.second=j;
            }

        }
    }
    cout << "indices are" <<endl;
    cout<< p.first << " " << p.second <<endl;
    return 0;

}
/*

TIME COMPLEXITY - O(N2)

QUES TAG----->TWO SUM 

*/