/*<aside>
💡 **Q6.** Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

**Example 1:**
Input: nums = [1,2,3,1]

Output: true

</aside>*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the size of the array" <<endl;
    int n;
    cin >> n;
    vector<int>arr(n);
    cout << "Enter array elements" << endl;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    //count number of element occurence
    for(int i=0; i<n; i++) {
        int c= count(arr.begin(),arr.end(),arr[i]);
        if(c>=2) {
            cout << "TRUE" <<endl;
            return 0;
        }
    }
    cout << "FALSE" << endl;
    return 0;

}
/*
TIME CMP--->O(N)

QN TAG-> CHECK DUPLICATES
*/