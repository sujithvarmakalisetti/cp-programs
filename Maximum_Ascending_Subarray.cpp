#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    
    int n;
    
    cin>>n;
    
    vector<int>arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      
    int m=0;
    
    int currentMax=arr[0];
    
    for(int i=1;i<n;i++){
        if(arr[i-1]<arr[i]){
            currentMax+=arr[i];
        }
        else{
            m=max(currentMax,m);
        currentMax=arr[i];
        }
    }
    
    m=max(m,currentMax);
    
    cout<<m;
    
    return 0;
}
