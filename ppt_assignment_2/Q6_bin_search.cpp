/*Question 6
Given an array of integers nums which is sorted in ascending order, and an integer target,
write a function to search target in nums. If target exists, then return its index. Otherwise,
return -1.

You must write an algorithm with O(log n) runtime complexity.

Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4

Explanation: 9 exists in nums and its index is 4*/
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
    cout << "Enter the target element" << endl;
    int target;
    cin >> target;
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while (s<=e) {
        if(arr[mid]==target) {
            cout << "index is: "<<mid <<endl;
            return 0;
        } else if(target<arr[mid]) {
            e=mid-1;
        } else {
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    cout << -1 <<endl;
    return 0;

}
