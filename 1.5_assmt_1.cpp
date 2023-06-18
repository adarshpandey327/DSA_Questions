/*<aside>
💡 **Q5.** You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

**Example 1:**
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]

**Explanation:** The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

</aside>*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the size of the array 1: " <<endl;
    int n1;
    cin >> n1;
    int arr1[n1];
    cout << "Enter array 1 elements: " << endl;
    for(int i=0; i<n1; i++) {
        cin >> arr1[i];
    }
    cout << "Enter the size of the array 2: " <<endl;
    int n2;
    cin >> n2;
    int arr2[n2];
    cout << "Enter array 2 elements: " << endl;
    for(int i=0; i<n2; i++) {
        cin >> arr2[i];
    }
    //logic
    int i=0,j=0;
    //taking help of a vector amd in the end copy the element to arr1 and erase vector
    vector<int>res;
    while(i<(n1-n2) && j<n2) {
        if(arr1[i]<arr2[j]) {
            res.push_back(arr1[i]);
            i++;
        } else {
            res.push_back(arr2[j]);
            j++;
        }
    }
    while(i<(n1-n2)) {
        res.push_back(arr1[i]);
        i++;
    }
    while(j<n2) {
        res.push_back(arr2[j]);
        j++;
    }
    //copying elements
    for(i=0; i<n1; i++) {
        arr1[i]=res[i];
    }
    cout << "The resultant sorted array is: "<<endl;
    for(int k=0; k<res.size(); k++) {
        cout << arr1[k] <<" ";
    }
    //clearing vector memory
    res.clear();
    return 0;
}
/*

TIME COMPLEXITY ---O(M+N)
MERGE SORT TECHNIQ

QUES TAG--->MERGE TWO SORTED ARRAY


*/