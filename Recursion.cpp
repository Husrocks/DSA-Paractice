#include <bits/stdc++.h>
using namespace std;

void print1_to_Nnames(int i, int n) {
    if (i > n)  // Base case: stop when i > n
        return;

    cout << i << " Raj "; // Print current number
    i++;  
    print1_to_Nnames(i , n);       // Recursive call with next number
}

void print_1toN(int i , int n){
    if(i > n)
    return;
    cout << i <<endl;
    print_1toN(i+1 , n);
}

void print3(int i , int n){ //N to 1
    if(i < 1)
    return;
    cout << i <<endl;
    print3(i-1 , n);
}

void print4(int i , int n){ //1 to N
    if(i <1)
    return;
    
    print4(i-1 , n);
    cout << i <<endl;
}

void print5(int i , int n){ //N to 1 Backtracking
    if(i >n)
    return;
    
    print5(i+1 , n);
    cout << i <<endl;
}

void f( int i , int sum){ //Parametric Recursion in which we pass sum as parameter
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    f(i-1,sum+i);
}

int f1(int n){//function to calculate sum of first n natural numbers
    if(n==0){
    return 0;
    }
    return n + f1(n-1);
}

int f2(int n){//function to calculate factorial of n
    if(n==0){
    return 1;
    }
    return n * f1(n-1);
}

void f3(int a[],int l , int r){  //reverse an array using recursion
    if(l>=r){
        return;
    }
    swap(a[l],a[r]);
    f3(a , l+1 , r-1);
}

void f4(int a[],int i,int n ){      //reverse an array using recursion

    if(i>= n/2){
        return;
    }
    swap(a[i],a[n-i-1]);
    f4(a , 1+i ,n);
}

bool f5(string s , int i ){ //check if a string is palindrome using recursion
    if( i>= s.size()/2)
    return true;
    if(s[i] != s[s.size()-i-1])
    return false;
    return f5(s , i+1);
}

int f6(int n ){ //fibonacci number using recursion
    if(n<=1)
    return n;
    int last = f6(n-1);
    int slast = f6(n-2);
    return last + slast;
}

void F5(int ind , vector<int> &ds , int arr[], int n){
    if(ind ==n){
        for (auto it : ds){
            cout<<it<<" ";
        }
        if(ds.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
        //take or pick the element
        ds.push_back(arr[ind]);
        F5(ind+1 , ds , arr , n);
        ds.pop_back();
        //not take or not pick the element
        F5(ind+1 , ds , arr , n);

    }

int main() {
    // int n;
    // int  i ;
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++) 
    // cin >> a[i]; 
    // f4(a ,0 , n);  
    // for (int i = 0; i < n; i++) 
    // cout << a[i] << " ";
    // cout<<f1(n)<<endl;
    // string s = "madam";
    // cout << "Palindrome check: " << f5(s, 0) 
    //      << " | String size: " << s.size()
    //      << " | Last index: " << s.size() - 1 << endl;
    //  cout<<f6(n)<<endl;


    //for print all subsequences of an array
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    F5(0 , ds , arr , n);


    
    return 0;
}
