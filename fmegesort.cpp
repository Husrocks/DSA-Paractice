#include <iostream>
#include <vector>
using namespace std;

// ---------------------- CODE KE MAIN STEPS ----------------------
// 1. User se array ka size aur elements lein
// 2. Merge Sort use karke array ko sort karein
//    - Array ko do hisson me divide karein
//    - Har half ko recursively sort karein
//    - Dono sorted halves ko merge karein
// 3. Sorted array ko print karein

// ------------------------- MERGE FUNCTION ----------------------------
// Ye function do sorted hisson ko merge karke ek sorted array banata hai
// Left half:  arr[low ... mid]
// Right half: arr[mid+1 ... high]
void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array jahan sorted numbers store honge

    int left = low;      // left half ka start index
    int right = mid + 1; // right half ka start index

    // Dono halves ke elements compare karke chota element temp me daal dein
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]); // chota element temp me daal do
            left++;                    // next element left half me move karo
        } else {
            temp.push_back(arr[right]); // chota element temp me daal do
            right++;                     // next element right half me move karo
        }
    }

    // Agar left half me elements bache ho to unko bhi temp me daal do
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Agar right half me elements bache ho to unko bhi temp me daal do
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Temp ke sorted elements ko original array me copy kar do
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low]; // i-low kyunki temp ka index 0 se start hota hai
    }
}

// ---------------------- MERGE SORT (RECURSIVE) -----------------------
// Ye function array ko do halves me divide karta hai, har half ko sort karta hai aur merge karta hai
void mergeSortRecursive(vector<int> &arr, int low, int high) {
    if (low == high) return; // agar sirf 1 element ho to already sorted hai

    int mid = low + (high - low) / 2; // middle index safely find karna
    mergeSortRecursive(arr, low, mid);      // left half ko sort karo
    mergeSortRecursive(arr, mid + 1, high); // right half ko sort karo
    merge(arr, low, mid, high);             // dono halves ko merge karo
}

// Ye public function hai jo merge sort ko call karta hai
void mergeSort(vector<int> &arr, int n) {
    mergeSortRecursive(arr, 0, n - 1); // poore array ko sort karo
}

int main() {
    int n;
    cout << "Array ka size enter karein: ";
    cin >> n;

    vector<int> arr(n);
    cout << n << " elements enter karein: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, arr.size()); // merge sort call karo

    cout << "Sorted array: ";
    for (int x : arr) {
        cout << x << " "; // sorted elements print karo
    }
    cout << endl;
}
