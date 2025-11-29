#include <iostream>
#include <vector>
using namespace std ; 
void heapify(vector<int> & arr , int n , int i){
    int largest  = i ;
    int left = 2*i+1;
    int right = 2*i+2;

    //left 
    if(left< n && arr[left]>arr[largest]){
        largest = left;
    }

    //rigth
    if(right<n && arr[right]>arr[largest]){
        largest= right ;
    }
    //largest
    if(largest !=i){
        swap(arr[i],arr[largest]);
        heapify(arr , n , largest);

    }



}

void heapsort(vector<int>&arr){
    int n = arr.size();
    //max heap

    for (int i = n/2-1 ; i>=0; i--){
        heapify(arr , n , i);
    
    }
    //extraction of elements 
    for(int i = n-1 ; i >0; i--){
        swap(arr[0], arr[i]);
        heapify(arr , i , 0);
    }

}

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
