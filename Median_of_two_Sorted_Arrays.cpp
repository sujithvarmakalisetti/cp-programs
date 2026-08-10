#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m;
    cin>>n;
    cin>>m;
    vector<int>num1(n);
    vector<int>num2(m);
    for(int i=0;i<n;i++)
        cin>>num1[i];
    for(int i=0;i<m;i++)
        cin>>num2[i];
    vector<int>result;
    int i=0,j=0;
    while(i<n && j<m){
        if(num1[i]<num2[j]){
            result.push_back(num1[i]);
            i++;
        }
        else{
            result.push_back(num2[j]);
            j++;
        }
    }
    while(i<n){
         result.push_back(num1[i]);
            i++;
    }
    while(j<m){
        result.push_back(num2[j]);
        j++;
    }
    
    int v=result.size()%2;
    int p=result.size()/2;
   

if(v==0){
    int n1 = result[p-1];
    int n2 = result[p];
    cout << (n1+n2)/2.0;
}
else{
    cout << result[p]<<".0";
}
    return 0;
}
