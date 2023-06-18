/*<aside>
💡 **Q7.** Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the nonzero elements.

Note that you must do this in-place without making a copy of the array.

**Example 1:**
Input: nums = [0,1,0,3,12]7
Output: [1,3,12,0,0]

</aside>*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the size of the array" <<endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter array elements" << endl;
    for(int k=0; k<n; k++) {
        cin >> arr[k];
    }
    int i=0;
    int j=1;
    while(j<n) {
        if(arr[i]==0) {
            if(arr[j]!=0) {
                swap(arr[i],arr[j]);
            } else {
                j++;
            }
        } else {
            i++;
        }

    }
    for( i=0; i<n; i++) {
        cout <<arr[i] <<" ";
    }
    return 0;
}
/*
TIME CPM-->O(N)
Q.TAG---> MOVE ZEROES
*/