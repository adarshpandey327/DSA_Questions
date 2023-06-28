/*
Question 8
Given an array of meeting time intervals where intervals[i] = [starti, endi],
determine if a person could attend all meetings.

Example 1:
Input: intervals = [[0,30],[5,10],[15,20]]
Output: false
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the size of the array" <<endl;
    int n,m;
    cin >> n >>m;
    vector<vector<int>>nums( n , vector<int> (m));
    cout << "Enter array elements" << endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> nums[i][j];
        }
    }
    
    for(int i=0; i<n-1; i++) {
        if(nums[i+1][0]<nums[i][1]) {
            cout << "FALSE";
            return 0;
        }


    }

    cout << "TRUE";

    return 0;
}
