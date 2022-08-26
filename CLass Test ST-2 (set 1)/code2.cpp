// Gaurav Bhainsora - 2010990229 - Set 1;



#include <bits/stdc++.h>

using namespace std;
// function to check
void findFreq(int* a, int n){
    unordered_map<int,int> hash;
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    
    cout<<"repeated Number    frequency\n";
   // Printing the answer
    for(auto it=hash.begin();it!=hash.end();it++)
    if(it->second>1)
    cout<<it->first<<"                  "<<it->second<<endl;
    
}

int main()
{
    //Taking input
    int n;
    cout<<"enter array length\n";
    cin>>n;
    int* arr=(int*)(malloc(sizeof(int)*n));
    
    cout<<"input array elements...\n";
    // Taking input for array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findFreq(arr,n);

    return 0;
}