#include <iostream>
#include <vector>
using namespace std;

// ---------------------- HEAPIFY FUNCTION ----------------------
// Ye function array ko max heap ka property follow karne me help karta hai
// Matlab har parent node apne children se bada ho
void heapify2(vector<int>& arr, int n, int i) {
    int largest = i;          // Assume kar lete hain ke root (i) sabse bara hai
    int left = 2*i + 1;       // Left child ka index
    int right = 2*i + 2;      // Right child ka index

    // Check karein agar left child exist karta hai aur root se bara hai
    if (left < n && arr[left] > arr[largest])
        largest = left;       // Left child sabse bara hai ab

    // Check karein agar right child exist karta hai aur current largest se bara hai
    if (right < n && arr[right] > arr[largest])
        largest = right;      // Right child sabse bara hai ab

    // Agar largest root nahi hai, to swap karein aur phir se heapify karein
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify2(arr, n, largest); // Recursive call to fix subtree
    }
}

// ---------------------- HEAPSORT FUNCTION ----------------------
// Ye function array ko sort karta hai using heap
void heapsort(vector<int>& arr) {
    int n = arr.size();       // Array ka size

    // Step 1: Max heap build karo
    for (int i = n/2 - 1; i >= 0; i--) {
        heapify2(arr, n, i);
    }

    // Step 2: Heap se elements extract karo one by one
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);    // Current largest element ko end me bhejo
        heapify2(arr, i, 0);     // Reduced heap ko heapify karo
    }
}

// ---------------------- MAIN FUNCTION ----------------------
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;                   // Array ka size input karein

    vector<int> arr(n);         // Size n ka array create karein

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];          // Array ke elements input karein
    }

    heapsort(arr);              // Heap sort call karein

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Sorted array print karein
    }
    cout << endl;

    return 0;
}
