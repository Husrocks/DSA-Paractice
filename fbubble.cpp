#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr){
    int n = arr.size();
    
    for(int i = n-1 ; i>=0; i--){
        bool swapped = false;   // reset before each pass

        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;   // exit early if already sorted
    }
}
    
int main(){
    int n;
    cout<<"enter the n"<<endl;
    cin>> n;

    vector<int> arr(n);
    cout<<"enter array"<<endl;
    for (int i = 0; i < n; i++)
        cin>>arr[i];

    bubbleSort(arr);

    cout<<"sorted array:"<<endl;
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
}
