#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for (int i = 0 ; i<=n-2; i++){
        int mini = i;
        for (int j = i; j <=n-1; j++)
        {
            if(arr[j]<arr[mini]){
                mini=j;
            }
            
        }
        int temp = arr[mini];
            arr[mini]=arr[i];
            arr[i]= temp;
        
    }
    
}
int main(){
    int n;
    cout<<"enter the n" <<endl;
    cin>> n;
    int arr[n];
    cout<<"enter array"<<endl;
    for (int i = 0; i < n; i++)
    
    cin>>arr[i];
    selectionSort(arr , n);
    //printing the sorted array

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    return 0 ;

   
    
}