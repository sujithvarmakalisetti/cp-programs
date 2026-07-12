#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }   
    int minindex,maxindex;
    
    int min=a[0];
    
    int m=a[0];
   
    
    
    for(int i=0;i<n;i++){
        if(a[i]<=min){
            minindex=i;
            min=a[i];
        }
        if(a[i]>=m){
            maxindex=i;
            m=a[i];
        }
    }
    int temp=a[minindex];
    a[minindex]=a[maxindex];
    a[maxindex]=temp;
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }   
    
    
    return 0;
    
}
