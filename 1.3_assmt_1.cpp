/*
💡 **Q3.** Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

**Example 1:**
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
    int arr[n];
    cout << "Enter array elements in a sorted manner:" << endl;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the target element: " << endl;
    int target;
    cin >> target;

    //since compleaxity must be O(logn) , i am using binary search
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<=e) {
        if(target==arr[mid]) {
            cout <<"Element found at index: "<< mid << endl;
            return 0;
        } else if(target<arr[mid]) {
            e=mid-1;
        } else {
            s=mid+1;
        }
        mid=(s+e)/2;
    }

    cout <<"Element not exist, it would be at: "<< mid+1 << " if it were inserted in order." <<endl;
    return 0;

}
/*
TIME COMPLEXITY----O(LOGN)

QUES TAG---> FIND INSERTION POSITION / BINARY SEARCH



*/