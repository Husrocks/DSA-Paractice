#include <iostream>
#include<vector>
using namespace std;
// ------------------------- MERGE FUNCTION ----------------------------
// This function merges two sorted halves of the array:
// Left half:  arr[low ... mid]
// Right half: arr[mid+1 ... high]
void merge (vector<int> & arr , int low , int mid ,int high){
    vector<int> temp;// temporary array to store sorted elements
    int left = low; // starting index of left subarray
    int right = mid+1;// starting index of right subarray
    while(left<=mid && right <=high){   // Compare elements from both subarrays and push smallest into temp
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    } 
    // Push remaining elements from left subarray (if any)
    while (left <=mid){   
        temp.push_back(arr[left]);
        left++;
    }
        // Push remaining elements from right subarray (if any)

    while (right<=high){
        temp.push_back(arr[right]);
        right++;
    }
      // Copy sorted elements back to original array
    for(int i = low ; i<=high; i++){
        arr[i]=temp[i-low];
    }
}

// ---------------------- MERGE SORT (RECURSIVE) -----------------------
// Recursively divides the array into halves until single elements remain,
// then merges them back in sorted order.

void mergeSortRecursive (vector<int> &arr , int low , int high){
    if(low == high ) return;   // Base condition – when only 1 element, return
    int mid = low +(high-low)/2;   // Avoids integer overflow
    mergeSortRecursive(arr , low , mid); // Sort left half
    mergeSortRecursive(arr , mid+1 , high); // Sort right  half
    merge(arr , low , mid , high);
    // Merge the two sorted halves
}
// This function is the public interface used to call merge sort.

void mergeSort(vector <int>& arr, int n){
    mergeSortRecursive(arr , 0 , n-1);
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    mergeSort(arr, arr.size());

    cout << "Sorted array: ";
    for(int x : arr){
        cout << x << " ";
    }
    cout << endl;
}
