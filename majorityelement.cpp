#include <cmath>
#include <cstdio>
#include <vector>
#include<map>
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
    int c=0;
    int ele=a[0];
    for(int i=0;i<n;i++){
        if(ele==a[i]){
            c++;
        }
        else{
            c--;
        }
        
        
        if(c==0){
            ele=a[i];
            c++;
        }
    }
    c=0;
    for(int i=0;i<n;i++){
        if(ele==a[i]){
            c++;
        }
    }
    if(c>(n/2)){
        cout<<ele;
    }
    else{
        cout<<-1;
    }
    return 0;
    
}
