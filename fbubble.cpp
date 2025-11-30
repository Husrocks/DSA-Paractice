#include <bits/stdc++.h>
using namespace std;
//ye hai bubbel sort ka function 
void bubbleSort(vector<int> &arr){  //arr li hai vector me 
    int n = arr.size();
    
    for(int i = n-1 ; i>=0; i--){
        bool swapped = false;   // reset before each pass

        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j+1]){   //compare kry ga [2,13,14] 2 ko 13 sy esy hi sb ko
                swap(arr[j], arr[j+1]); //swapp kry ga 
                swapped = true;
            }
        }
        if(!swapped) break;   // exit early if already sorted  agr pehly sy sort hogi array to exit mar dy gA
    }
}
//yaha tk bhi kr lia to kam hojay ga baki input or output k liye nechy 
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

