#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>&arr , int low , int mid , int high){
    vector<int>temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if (arr[left]<=arr[right]){
            temp.push_back (arr[left]);
            left++;
        }
        else{
            temp.push_back (arr[right]);
            right++;
        }

    }
    while(left<= mid){
        temp.push_back (arr[left]);
        left++;
    }

    while(right<= high){
        temp.push_back (arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i-low];
    }
    
}

void mergeSortrec(vector<int>&arr , int low , int high){
    if (low >= high) return ; 
    int mid = low + (high - low)/2;
    mergeSortrec(arr , low , mid);
    mergeSortrec(arr , mid+1 , high);
    merge(arr , low , mid , high);

}

void mergesort(vector<int>&arr , int n){
    mergeSortrec(arr , 0 , n-1 );
}

int main (){
    int n ; 
    cout<<"Enter N: ";
    cin>>n;
    vector<int> arr(n);
cout<<"Enter "<< n << " elements: ";
    for (int i = 0; i < n; i++)
    {
     cin>> arr[i];
    }

    mergesort(arr , arr.size());
    cout<<"sorted array: ";
    for(int x:arr){
        cout<< x <<" "; 
}
    cout<<endl;
}