#include <iostream>      
#include <vector>       
using namespace std;

// Function to maintain max heap property for subtree rooted at index i
void heapify2(vector<int>& arr , int n , int i){
    int largest  = i;            // Assume root i is largest
    int left = 2*i+1;            // Left child index
    int right = 2*i+2;           // Right child index

    // If left child exists and is greater than root
    if(left < n && arr[left] > arr[largest])
        largest = left;

    // If right child exists and is greater than current largest
    if(right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root, swap and continue heapifying
    if(largest != i){
        swap(arr[i],arr[largest]);
        heapify2(arr , n , largest);
    }
}

// Heapsort function
void heapsort(vector<int>& arr){
    int n = arr.size();          // Get array size

    // Build max heap
    for (int i = n/2-1 ; i>=0; i--){
        heapify2(arr , n , i);
    }

    // Extract elements from heap one by one
    for (int i = n-1 ; i>0; i--){
        swap(arr[0],arr[i]);     // Move current largest to end
        heapify2(arr , i , 0);   // Heapify reduced heap
    }
}

// Main function
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;                   // Input size of array

    vector<int> arr(n);         // Create vector of size n

    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];          // Input array elements
    }

    heapsort(arr);              // Call heapsort function

    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";  // Print sorted array
    }
    cout << endl;

    return 0;
}
