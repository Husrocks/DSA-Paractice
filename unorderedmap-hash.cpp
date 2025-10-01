#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cout<<"Enter the size of array";
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //pre compute
    unordered_map<int , int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    int q;
    cout<<"enter the number of queries";
    cin>>q;
    while (q--)
    {
        int number;
        cout<<"enter the number to find its frequency";
        cin>>number;
        //fetch

        cout<<"the frequency of"<<number<< "is"<<mpp[number]<<endl;
        }
    
}