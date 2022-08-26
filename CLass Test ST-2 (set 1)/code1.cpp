#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Taking input
    int n;
    cin>>n;
    int arr[n];
    // Taking input for array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    unordered_map<int,int> m;
    // Checking
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    // Printing Output
    cout << "Non-repeated numbers are: ";
    for(auto i:m){
        if(i.second==1){
            cout<<i.first<<" ";
        }
    }

    return 0;
}