//hasihng for chARACTER IF THEY DONT SPECIFIED UPPER OR LOWER
#include<bits/stdc++.h>
using namespace std ;
int main (){
    string s;
    cout<<"Enter the string"<<endl;
    cin>> s;
//Pre-Compute 
    int hash[256] = {0};
    for(int i = 0; i<s.size(); i++){
        hash[s[i]]++;
    }
    int q ;
    cout<<"Enter the number of Queries"<<endl;
    cin>>q;
    while (q--)
    {
        char c;
        cout<<"tell the charcter to find how many time or find the frequency of it " <<endl;
        cin>> c;
        cout<<hash[c]<<endl;
    }
    

}


