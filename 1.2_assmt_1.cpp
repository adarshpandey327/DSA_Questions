/*
💡 **Q2.** Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

- Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
- Return k.

**Example :**
Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_*,_*]

**Explanation:** Your function should return k = 2, with the first two elements of nums being 2. It does not matter what you leave beyond the returned k (hence they are underscores)

*/
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
    cout << "Enter the val element" << endl;
    int val;
    cin >> val;

    //finding k value

    int k=0;
    for(int i=0; i<n; i++) {
        if(arr[i]!=val) {
            k++;
        }
    }
    cout <<"Different Element K: "<< k <<endl;

    //rearranging the Array

    int i=0;
    int j=n-1;
    while(i<j) {
        if(arr[i]==val) {
            if(arr[j]!=val) {
                swap(arr[i],arr[j]);
                j--;
                i++;
            } else {
                j--;
                continue;
            }
        } else {
            i++;
        }
    }

    cout << "rearranged array :" <<endl;
    for(i=0; i<n; i++) {
        cout << arr[i] <<" ";
    }

    cout <<endl;
    return 0;
}
/*
TIME COMPLEXITY- O(LOG N)

QUES TAG- REMOVE OCCURENCE OF A VALUE GIVEN

*/