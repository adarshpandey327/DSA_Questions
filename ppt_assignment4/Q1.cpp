/*
<aside>
💡 **Question 1**
Given three integer arrays arr1, arr2 and arr3 **sorted** in **strictly increasing** order, return a sorted array of **only** the integers that appeared in **all** three arrays.

**Example 1:**

Input: arr1 = [1,2,3,4,5], arr2 = [1,2,5,7,9], arr3 = [1,3,4,5,8]

Output: [1,5]

**Explanation:** Only 1 and 5 appeared in the three arrays.

</aside>
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the size of the array 1:" <<endl;
    int n1;
    cin >> n1;
    vector<int>nums1(n1);
    cout << "Enter array elements" << endl;
    for(int i=0; i<n1; i++) {
        cin >> nums1[i];
    }

    cout << "Enter the size of the array 2:" <<endl;
    int n2;
    cin >> n2 ;
    vector<int>nums2(n2);
    cout << "Enter array elements" << endl;
    for(int i=0; i<n2; i++) {
        cin >> nums2[i];
    }

    cout << "Enter the size of the array 3:" <<endl;
    int n3;
    cin >> n3 ;
    vector<int>nums3(n3);
    cout << "Enter array elements" << endl;
    for(int i=0; i<n3; i++) {
        cin >> nums3[i];
    }

    vector<int>ans;
    int i=0,j=0,k=0;
    while(i<nums1.size() && j<nums2.size() && k<nums3.size()) {
        if(nums1[i] == nums2[j] && nums2[j]==nums3[k]) {
            ans.push_back(nums1[i]);
            i++;
            j++;
            k++;
        } else if(nums1[i]<nums2[j]) {
            i++;
        } else if(nums2[j]<nums3[k]) {
            j++;
        } else {
            k++;
        }
    }

    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] <<" ";
    }




    return 0;
}
