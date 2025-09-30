
#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;  // Take input for the size of the array

    int arr[n]; 

    // Input array elements
    for (int i = 0; i < n; i++) {
        cout << "Enter array element " << i + 1 << ": ";
        cin >> arr[i];
    }

 
    // PRE-COMPUTATION (HASHING STEP)
  
    // Create a hash array to count frequency of each number.
    // Size is n+1 because we want to safely access index 'n' if needed. but if the its > 10^6 it will not work becasue we can take 10^6 int size inside the int main 
    int hash[n + 1] = {0}; // Initialize all elements to 0

    // Count frequency of each number
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1; // Increment count for that number
    }

    // ANSWERING QUERIES
   
    int q;
    cout << "Enter number of queries: ";
    cin >> q; // Number of times user will ask for frequency

    while (q--) { // Repeat q times until q = 0
        int number;
        cout << "Enter number to find its frequency: ";
        cin >> number;

        // Fetch and print frequency or the number how many time in array from precomputed hash array
        cout << "Frequency of " << number << " is: " << hash[number] << endl;
    }

    return 0; 
}



//This works only when your array values are ≤ n (or at least smaller than the size of the hash array).
//If the user enters very large numbers (e.g., 1000 when n = 5), this will cause out-of-bounds access (undefined behavior).