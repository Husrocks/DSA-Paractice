#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &arr , int low , int mid , int high){
    vector<int> temp;
    int left = low;
    int right= mid+1;
    while (left<=mid && right <=high)
    {
        if (arr[left]<= arr[right]){
            temp.push_back (arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (right<=high)
    {
       temp.push_back(arr[right]);
            right++;
    }

    while (left <= mid)
{
   temp.push_back(arr[left]);
   left++;
}

    for (int i = low; i <=high; i++)
    {
        arr[i] = temp[i-low];
    }
    
    
}
void mergeSortRec(vector<int> &arr , int low , int high){
    if(low == high) return;
    int mid = low +(high-low)/2;   // Avoids integer overflow
    mergeSortRec(arr , low , mid);
    mergeSortRec(arr , mid+1 , high);
    merge(arr , low , mid , high);
}


int main (){
    vector<int> arr{1,3,7,9,5,8};
    mergeSortRec(arr , 0 ,  arr.size()-1 );
   
   
    for (int i = 0; i < arr.size(); i++)
    {
        int x = arr[i];
        cout << x << " ";    // print the element

    }
    return 0;
}